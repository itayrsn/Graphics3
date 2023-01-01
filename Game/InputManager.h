#pragma once   //maybe should be static class

#include "display.h"
#include "game.h"
#include <iostream>
#include <glm/gtc/matrix_transform.hpp>
#include <fstream>


float PI = 3.1415926535;
float angle = 90.0f;
float angleSum = 0;
int clockwise = -1;

mat4 getRotateMatrix(float angle, const glm::vec3& vec) {
    return glm::rotate(glm::mat4(1), angle, vec);
}

void mouse_callback(GLFWwindow* window, int button, int action, int mods) {
    if (action == GLFW_PRESS) {
        Game* scn = (Game*)glfwGetWindowUserPointer(window);
        double x2, y2;
        glfwGetCursorPos(window, &x2, &y2);
        scn->Picking((int)x2, (int)y2);
    }
}

void scroll_callback(GLFWwindow* window, double xoffset, double yoffset) {
    Game* scn = (Game*)glfwGetWindowUserPointer(window);
    scn->MyTranslate(glm::vec3(0, 0, xoffset), 0);

}

void rotation(Rubiks(*cubes)[NCUBES][NCUBES], int n, char face) { // TODO: replace 'n' with NCUBES
    switch (face) {
    case ('R'):
        if (clockwise == 1) {
            for (int i = 0; i < (n + 1) / 2; i++) {
                for (int j = 0; j < n / 2; j++) {
                    Rubiks temp = cubes[NCUBES - 1][NCUBES - 1 - j][i];
                    cubes[NCUBES - 1][NCUBES - 1 - j][i] = cubes[NCUBES - 1][NCUBES - 1 - i][n - j - 1];
                    cubes[NCUBES - 1][NCUBES - 1 - i][n - j - 1] = cubes[NCUBES - 1][j][NCUBES - 1 - i];
                    cubes[NCUBES - 1][j][NCUBES - 1 - i] = cubes[NCUBES - 1][i][j];
                    cubes[NCUBES - 1][i][j] = temp;
                }
            }
        }
        else {
            // Consider all squares one by one
            for (int x = 0; x < n / 2; x++) {
                // Consider elements in group
                // of 4 in current square
                for (int y = x; y < n - x - 1; y++) {
                    // Store current cell in
                    // temp variable
                    Rubiks temp = cubes[NCUBES - 1][x][y];
                    // Move values from right to top
                    cubes[NCUBES - 1][x][y] = cubes[NCUBES - 1][y][NCUBES - 1 - x];
                    // Move values from bottom to right
                    cubes[NCUBES - 1][y][NCUBES - 1 - x] = cubes[NCUBES - 1][NCUBES - 1 - x][NCUBES - 1 - y];
                    // Move values from left to bottom
                    cubes[NCUBES - 1][NCUBES - 1 - x][NCUBES - 1 - y] = cubes[NCUBES - 1][NCUBES - 1 - y][x];
                    // Assign temp to left
                    cubes[NCUBES - 1][NCUBES - 1 - y][x] = temp;
                }
            }

        }

        break;

    case ('L'):

        if (clockwise == 1) {
            // Consider all squares one by one
            for (int x = 0; x < n / 2; x++) {
                // Consider elements in group
                // of 4 in current square
                for (int y = x; y < n - x - 1; y++) {
                    // Store current cell in
                    // temp variable
                    Rubiks temp = cubes[0][x][y];
                    // Move values from right to top
                    cubes[0][x][y] = cubes[0][y][NCUBES - 1 - x];
                    // Move values from bottom to right
                    cubes[0][y][NCUBES - 1 - x] = cubes[0][NCUBES - 1 - x][NCUBES - 1 - y];
                    // Move values from left to bottom
                    cubes[0][NCUBES - 1 - x][NCUBES - 1 - y] = cubes[0][NCUBES - 1 - y][x];
                    // Assign temp to left
                    cubes[0][NCUBES - 1 - y][x] = temp;
                }
            }
        }
        else {
            for (int i = 0; i < (n + 1) / 2; i++) {
                for (int j = 0; j < n / 2; j++) {
                    Rubiks temp = cubes[0][NCUBES - 1 - j][i];
                    cubes[0][NCUBES - 1 - j][i] = cubes[0][NCUBES - 1 - i][n - j - 1];
                    cubes[0][NCUBES - 1 - i][n - j - 1] = cubes[0][j][NCUBES - 1 - i];
                    cubes[0][j][NCUBES - 1 - i] = cubes[0][i][j];
                    cubes[0][i][j] = temp;
                }
            }
        }

        break;

    case ('F'):
        if (clockwise == 1) {
            for (int i = 0; i < (n + 1) / 2; i++) {
                for (int j = 0; j < n / 2; j++) {
                    Rubiks temp = cubes[NCUBES - 1 - j][i][NCUBES - 1];
                    cubes[NCUBES - 1 - j][i][NCUBES - 1] = cubes[NCUBES - 1 - i][n - j - 1][NCUBES - 1];
                    cubes[NCUBES - 1 - i][n - j - 1][NCUBES - 1] = cubes[j][NCUBES - 1 - i][NCUBES - 1];
                    cubes[j][NCUBES - 1 - i][NCUBES - 1] = cubes[i][j][NCUBES - 1];
                    cubes[i][j][NCUBES - 1] = temp;
                }
            }
        }
        else {
            for (int x = 0; x < n / 2; x++) {
                // Consider elements in group
                // of 4 in current square
                for (int y = x; y < n - x - 1; y++) {
                    // Store current cell in
                    // temp variable
                    Rubiks temp = cubes[x][y][NCUBES - 1];
                    // Move values from right to top
                    cubes[x][y][NCUBES - 1] = cubes[y][NCUBES - 1 - x][NCUBES - 1];
                    // Move values from bottom to right
                    cubes[y][NCUBES - 1 - x][NCUBES - 1] = cubes[NCUBES - 1 - x][NCUBES - 1 - y][NCUBES - 1];
                    // Move values from left to bottom
                    cubes[NCUBES - 1 - x][NCUBES - 1 - y][NCUBES - 1] = cubes[NCUBES - 1 - y][x][NCUBES - 1];
                    // Assign temp to left
                    cubes[NCUBES - 1 - y][x][NCUBES - 1] = temp;
                }
            }
        }

        break;
    case ('B'):
        if (clockwise == 1) {
            // Consider all squares one by one
            for (int x = 0; x < n / 2; x++) {
                // Consider elements in group
                // of 4 in current square
                for (int y = x; y < n - x - 1; y++) {
                    // Store current cell in
                    // temp variable
                    Rubiks temp = cubes[x][y][0];
                    // Move values from right to top
                    cubes[x][y][0] = cubes[y][NCUBES - 1 - x][0];
                    // Move values from bottom to right
                    cubes[y][NCUBES - 1 - x][0] = cubes[NCUBES - 1 - x][NCUBES - 1 - y][0];
                    // Move values from left to bottom
                    cubes[NCUBES - 1 - x][NCUBES - 1 - y][0] = cubes[NCUBES - 1 - y][x][0];
                    // Assign temp to left
                    cubes[NCUBES - 1 - y][x][0] = temp;
                }
            }
        }
        else {
            for (int i = 0; i < (n + 1) / 2; i++) {
                for (int j = 0; j < n / 2; j++) {
                    Rubiks temp = cubes[NCUBES - 1 - j][i][0];
                    cubes[NCUBES - 1 - j][i][0] = cubes[NCUBES - 1 - i][n - j - 1][0];
                    cubes[NCUBES - 1 - i][n - j - 1][0] = cubes[j][NCUBES - 1 - i][0];
                    cubes[j][NCUBES - 1 - i][0] = cubes[i][j][0];
                    cubes[i][j][0] = temp;
                }
            }
        }

        break;
    case ('U'):
        if (clockwise == 1) {
            for (int x = 0; x < n / 2; x++) {
                // Consider elements in group
                // of 4 in current square
                for (int y = x; y < n - x - 1; y++) {
                    // Store current cell in
                    // temp variable
                    Rubiks temp = cubes[x][NCUBES - 1][y];
                    // Move values from right to top
                    cubes[x][NCUBES - 1][y] = cubes[y][NCUBES - 1][NCUBES - 1 - x];
                    // Move values from bottom to right
                    cubes[y][NCUBES - 1][NCUBES - 1 - x] = cubes[NCUBES - 1 - x][NCUBES - 1][NCUBES - 1 - y];
                    // Move values from left to bottom
                    cubes[NCUBES - 1 - x][NCUBES - 1][NCUBES - 1 - y] = cubes[NCUBES - 1 - y][NCUBES - 1][x];
                    // Assign temp to left
                    cubes[NCUBES - 1 - y][NCUBES - 1][x] = temp;
                }
            }
        }
        else {
            for (int i = 0; i < (n + 1) / 2; i++) {
                for (int j = 0; j < n / 2; j++) {
                    Rubiks temp = cubes[n - 1 - j][NCUBES - 1][i];
                    cubes[n - 1 - j][NCUBES - 1][i] = cubes[n - 1 - i][NCUBES - 1][n - j - 1];
                    cubes[n - 1 - i][NCUBES - 1][n - j - 1] = cubes[j][NCUBES - 1][n - 1 - i];
                    cubes[j][NCUBES - 1][n - 1 - i] = cubes[i][NCUBES - 1][j];
                    cubes[i][NCUBES - 1][j] = temp;
                }
            }
        }

        break;

    case ('D'):
        if (clockwise == 1) {
            for (int i = 0; i < (n + 1) / 2; i++) {
                for (int j = 0; j < n / 2; j++) {
                    Rubiks temp = cubes[n - 1 - j][0][i];
                    cubes[n - 1 - j][0][i] = cubes[n - 1 - i][0][n - j - 1];
                    cubes[n - 1 - i][0][n - j - 1] = cubes[j][0][n - 1 - i];
                    cubes[j][0][n - 1 - i] = cubes[i][0][j];
                    cubes[i][0][j] = temp;
                }
            }
        }
        else {
            for (int x = 0; x < n / 2; x++) {
                // Consider elements in group
                // of 4 in current square
                for (int y = x; y < n - x - 1; y++) {
                    // Store current cell in
                    // temp variable
                    Rubiks temp = cubes[x][0][y];
                    // Move values from right to top
                    cubes[x][0][y] = cubes[y][0][NCUBES - 1 - x];
                    // Move values from bottom to right
                    cubes[y][0][NCUBES - 1 - x] = cubes[NCUBES - 1 - x][0][NCUBES - 1 - y];
                    // Move values from left to bottom
                    cubes[NCUBES - 1 - x][0][NCUBES - 1 - y] = cubes[NCUBES - 1 - y][0][x];
                    // Assign temp to left
                    cubes[NCUBES - 1 - y][0][x] = temp;
                }
            }


        }

        break;

    default:
        break;
    }
}

void fKeyCallback(Scene* scn) {
    for (int i = 0; i <= NCUBES - 1; i++)
        for (int j = 0; j <= NCUBES - 1; j++) {
            scn->shapes[scn->cubes[i][j][NCUBES - 1].index]->MyRotate(angle, vec3(0, 0, 1), 1);
            vec3 position = scn->cubes[i][j][NCUBES - 1].position;
            vec4 newPosition =
                getRotateMatrix(angle, vec3(0, 0, 1)) * vec4(position.x, position.y, position.z, 1);
            scn->shapes[scn->cubes[i][j][NCUBES - 1].index]->MyTranslate(
                vec3(newPosition) - position, 0);
            scn->cubes[i][j][NCUBES - 1].position = vec3(newPosition);
        }
    angleSum += angle;
    if (angleSum == 90) {
        rotation(scn->cubes, NCUBES, 'F');
        angleSum = 0;
    }
    if (angleSum == 180) {
        angleSum = 0;
        rotation(scn->cubes, NCUBES, 'F');
        rotation(scn->cubes, NCUBES, 'F');
    }
}

void bKeyCallback(Scene* scn) {
    for (int i = 0; i <= NCUBES - 1; i++)
        for (int j = 0; j <= NCUBES - 1; j++) {
            scn->shapes[scn->cubes[i][j][0].index]->MyRotate(-angle, vec3(0, 0, 1), 1);
            vec3 position = scn->cubes[i][j][0].position;
            vec4 newPosition =
                getRotateMatrix(-angle, vec3(0, 0, 1)) * vec4(position.x, position.y, position.z, 1);
            scn->shapes[scn->cubes[i][j][0].index]->MyTranslate(
                vec3(newPosition) - position, 0);
            scn->cubes[i][j][0].position = vec3(newPosition);
        }
    angleSum += angle;
    if (angleSum == 90) {
        rotation(scn->cubes, NCUBES, 'B');
        angleSum = 0;
    }
    if (angleSum == 180) {
        angleSum = 0;
        rotation(scn->cubes, NCUBES, 'B');
        rotation(scn->cubes, NCUBES, 'B');
    }
}

void rKeyCallback(Scene* scn) {
    for (int j = 0; j <= NCUBES - 1; j++)
        for (int k = 0; k <= NCUBES - 1; k++) {
            scn->shapes[scn->cubes[NCUBES - 1][j][k].index]->MyRotate(angle, vec3(1, 0, 0), 1);
            vec3 position = scn->cubes[NCUBES - 1][j][k].position;
            vec4 newPosition =
                getRotateMatrix(angle, vec3(1, 0, 0)) * vec4(position.x, position.y, position.z, 1);
            scn->shapes[scn->cubes[NCUBES - 1][j][k].index]->MyTranslate(
                vec3(newPosition) - position, 0);
            scn->cubes[NCUBES - 1][j][k].position = vec3(newPosition);
        }
    angleSum += angle;
    if (angleSum == 90) {
        rotation(scn->cubes, NCUBES, 'R');
        angleSum = 0;
    }
    if (angleSum == 180) {
        angleSum = 0;
        rotation(scn->cubes, NCUBES, 'R');
        rotation(scn->cubes, NCUBES, 'R');
    }
}

void lKeyCallback(Scene* scn) {
    for (int j = 0; j <= NCUBES - 1; j++)
        for (int k = 0; k <= NCUBES - 1; k++) {
            scn->shapes[scn->cubes[0][j][k].index]->MyRotate(-angle, vec3(1, 0, 0), 1);
            vec3 position = scn->cubes[0][j][k].position;
            vec4 newPosition =
                getRotateMatrix(-angle, vec3(1, 0, 0)) * vec4(position.x, position.y, position.z, 1);
            scn->shapes[scn->cubes[0][j][k].index]->MyTranslate(
                vec3(newPosition) - position, 0);
            scn->cubes[0][j][k].position = vec3(newPosition);
        }
    angleSum += angle;
    if (angleSum == 90) {
        rotation(scn->cubes, NCUBES, 'L');
        angleSum = 0;
    }
    if (angleSum == 180) {
        angleSum = 0;
        rotation(scn->cubes, NCUBES, 'L');
        rotation(scn->cubes, NCUBES, 'L');
    }
}

void uKeyCallback(Scene* scn) {
    for (int j = 0; j <= NCUBES - 1; j++)
        for (int k = 0; k <= NCUBES - 1; k++) {
            scn->shapes[scn->cubes[j][NCUBES - 1][k].index]->MyRotate(angle, vec3(0, 1, 0), 1);
            vec3 position = scn->cubes[j][NCUBES - 1][k].position;
            vec4 newPosition =
                getRotateMatrix(angle, vec3(0, 1, 0)) * vec4(position.x, position.y, position.z, 1);
            scn->shapes[scn->cubes[j][NCUBES - 1][k].index]->MyTranslate(
                vec3(newPosition) - position, 0);
            scn->cubes[j][NCUBES - 1][k].position = vec3(newPosition);
        }
    angleSum += angle;
    if (angleSum == 90) {
        rotation(scn->cubes, NCUBES, 'U');
        angleSum = 0;
    }
    if (angleSum == 180) {
        angleSum = 0;
        rotation(scn->cubes, NCUBES, 'U');
        rotation(scn->cubes, NCUBES, 'U');
    }
}

void dKeyCallback(Scene* scn) {
    for (int j = 0; j <= NCUBES - 1; j++)
        for (int k = 0; k <= NCUBES - 1; k++) {
            scn->shapes[scn->cubes[j][0][k].index]->MyRotate(-angle, vec3(0, 1, 0), 1);
            vec3 position = scn->cubes[j][0][k].position;
            vec4 newPosition =
                getRotateMatrix(-angle, vec3(0, 1, 0)) * vec4(position.x, position.y, position.z, 1);
            scn->shapes[scn->cubes[j][0][k].index]->MyTranslate(
                vec3(newPosition) - position, 0);
            scn->cubes[j][0][k].position = vec3(newPosition);
        }
    angleSum += angle;
    if (angleSum == 90) {
        rotation(scn->cubes, NCUBES, 'D');
        angleSum = 0;
    }
    if (angleSum == 180) {
        angleSum = 0;
        rotation(scn->cubes, NCUBES, 'D');
        rotation(scn->cubes, NCUBES, 'D');
    }
}

void mixer(Scene* scn) {
    if (angle != 90)
        angle = 90;

    int stepsCount = rand() % 20 + 10;
    int faceToRotate;

    std::ofstream mix_file;
    mix_file.open("mixer.txt", std::ios::trunc);

    for (int i = 0; i < stepsCount - 1; i++) {
        faceToRotate = rand() % 6;
        switch (faceToRotate) {
        case (0):
            mix_file << "F" << std::endl;
            fKeyCallback(scn);
            break;
        case (1):
            mix_file << "B" << std::endl;
            bKeyCallback(scn);
            break;
        case (2):
            mix_file << "R" << std::endl;
            rKeyCallback(scn);
            break;
        case (3):
            mix_file << "L" << std::endl;
            lKeyCallback(scn);
            break;
        case (4):
            mix_file << "U" << std::endl;
            uKeyCallback(scn);
            break;
        case (5):
            mix_file << "D" << std::endl;
            dKeyCallback(scn);
            break;
        }
    }

    mix_file.close();
}

void efficientSolver(Scene* scn) {

}

void key_callback(GLFWwindow* window, int key, int simulateButton, int action, int mods) {
    Game* scn = (Game*)glfwGetWindowUserPointer(window);

    if (action == GLFW_PRESS || action == GLFW_REPEAT) {
        switch (key) {
        case GLFW_KEY_ESCAPE:
            glfwSetWindowShouldClose(window, GLFW_TRUE);
            break;
        case GLFW_KEY_SPACE:
            clockwise = -clockwise;
            angle = -angle;

            /*if (scn->IsActive())
                scn->Deactivate();
            else
                scn->Activate();*/
            break;

            //				case GLFW_KEY_UP:
            //					scn->MoveCamera(0,scn->zTranslate,0.4f);
            //					break;
            //				case GLFW_KEY_DOWN:
            //					//scn->shapeTransformation(scn->xGlobalRotate,-5.f);
            //					//cout<< "down: "<<endl;
            //					scn->MoveCamera(0,scn->zTranslate,-0.4f);
            //					break;

        case GLFW_KEY_UP:
            scn->MyRotate(2, glm::vec3(1, 0, 0), 0);
            break;
        case GLFW_KEY_DOWN:
            scn->MyRotate(-2, glm::vec3(1, 0, 0), 0);
            break;

        case GLFW_KEY_LEFT:
            scn->MyRotate(2, glm::vec3(0, 1, 0), 0);
            break;
        case GLFW_KEY_RIGHT:
            scn->MyRotate(-2, glm::vec3(0, 1, 0), 0);
            break;

        case GLFW_KEY_Z:
            angle /= 2;
            break;

        case GLFW_KEY_A:
            if (angle < 180) {
                angle *= 2;
            }
            break;

        case GLFW_KEY_M:
            mixer(scn);
            break;

        case GLFW_KEY_F:
            fKeyCallback(scn);
            break;

        case GLFW_KEY_B:
            bKeyCallback(scn);
            break;

        case GLFW_KEY_R:
            rKeyCallback(scn);
            break;

        case GLFW_KEY_L:
            lKeyCallback(scn);
            break;

        case GLFW_KEY_U:
            uKeyCallback(scn);
            break;

        case GLFW_KEY_D:
            dKeyCallback(scn);
            break;

        default:
            break;
        }
    }
}

void cursor_position_callback(GLFWwindow* window, double xpos, double ypos) {
    Game* scn = (Game*)glfwGetWindowUserPointer(window);

    scn->UpdatePosition((float)xpos, (float)ypos);
    if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_RIGHT) == GLFW_PRESS) {
        scn->MouseProccessing(GLFW_MOUSE_BUTTON_RIGHT);
    }
    else if (glfwGetMouseButton(window, GLFW_MOUSE_BUTTON_LEFT) == GLFW_PRESS) {
        scn->MouseProccessing(GLFW_MOUSE_BUTTON_LEFT);
    }

}

void window_size_callback(GLFWwindow* window, int width, int height) {
    Game* scn = (Game*)glfwGetWindowUserPointer(window);

    scn->Resize(width, height);

}

void Init(Display& display) {
    display.AddKeyCallBack(key_callback);
    display.AddMouseCallBacks(mouse_callback, scroll_callback, cursor_position_callback);
    display.AddResizeCallBack(window_size_callback);
}
