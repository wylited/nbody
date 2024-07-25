#ifndef CAMERA_H
#define CAMERA_H

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Camera {
public:
  Camera(glm::vec3 position, glm::vec3 up, float yaw, float pitch);

  glm::mat4 GetViewMatrix();
  void ProcessKeyboard(int direction, float deltaTime);
  void ProcessMouseMovement(float xoffset, float yoffset,
                            bool constrainPitch = true);

private:
  void updateCameraVectors();

  glm::vec3 Position;
  glm::vec3 Front;
  glm::vec3 Up;
  glm::vec3 Right;
  glm::vec3 WorldUp;

  float Yaw;
  float Pitch;

  float MovementSpeed;
  float MouseSensitivity;
};

enum Camera_Movement { FORWARD, BACKWARD, LEFT, RIGHT };

#endif // CAMERA_H
