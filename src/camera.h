#ifndef CAMERA_H
#define CAMERA_H

#ifndef GL3_PROTOTYPES
#define GL3_PROTOTYPES
#include <GL3/gl3.h>
#endif

#include <glm/glm.hpp>

const glm::vec3 UP(0.0f, 1.0f, 0.0f);

const float DEFAULT_FOV = 45.0f;
const float DEFAULT_ASPECT = 1.33f;

const float ZNEAR = 0.1f;
const float ZFAR = 100.0f;

class Camera
{
public:
    Camera();
    Camera(int width, int height);

    void moveAt(float dx, float dy, float dz);

    /** Move the camera lookAt point vertically and horizontally,
    relatively to the (pose, lookat) vector.
    */
    void moveLookAt(float dx, float dy);

    void setAspect(int width, int height);

    glm::mat4 projection() const;
    glm::mat4 world2eye() const;

    glm::vec3 pose;
    glm::vec3 lookat;

private:
    float _aspect;
};

#endif // CAMERA_H
