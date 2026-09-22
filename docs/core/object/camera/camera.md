---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Camera
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Camera

`Camera` defines the viewpoint from which the scene is rendered. It supports orthographic and perspective projection, a look-at target with orbit, walk, slide, and zoom navigation helpers, and render-to-texture via an internal framebuffer. Inherits `Object` transform (`setPosition`, `setRotation`) so a chase camera can follow a player entity each frame.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**CameraType**](../../../incomplete-docs.md) | [**type**](camera-type.md) | Projection mode: `CAMERA_UI`, `CAMERA_ORTHO`, or `CAMERA_PERSPECTIVE`. Switching type reapplies that mode's default clip planes. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**autoResize**](camera-auto-resize.md) | When `true` (default), the projection is recalculated automatically when the canvas size changes. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**nearClip**](camera-near-clip.md) | Near clip plane distance. Geometry closer than this is not rendered. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**farClip**](camera-far-clip.md) | Far clip plane distance. Geometry further than this is not rendered. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**leftClip**](camera-left-clip.md) | Left extent of the orthographic frustum. Setting it disables `autoResize`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**rightClip**](camera-right-clip.md) | Right extent of the orthographic frustum. Setting it disables `autoResize`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**bottomClip**](camera-bottom-clip.md) | Bottom extent of the orthographic frustum. Setting it disables `autoResize`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**topClip**](camera-top-clip.md) | Top extent of the orthographic frustum. Setting it disables `autoResize`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**aspect**](camera-aspect.md) | Width-to-height ratio of the perspective frustum. Setting it disables `autoResize`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**yfov**](camera-yfov.md) | Vertical field-of-view in degrees for perspective projection. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**target**](camera-target.md) | Look-at point in local space. Setting it turns target mode back on. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**up**](camera-up.md) | Local up vector used to build the view matrix. Defaults to `(0, 1, 0)`. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**renderToTexture**](camera-render-to-texture.md) | When `true`, renders to an internal framebuffer instead of the main surface. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**transparentSort**](camera-transparent-sort.md) | Enables back-to-front sorting of transparent objects from this camera's viewpoint. |

## Constructors

| Arguments | Description |
| :--- | :--- |
| [**Scene**](../../scene/scene.md)* scene | Constructs a camera with perspective defaults, positioned at `(0, 0, 1)`. |
| [**Scene**](../../scene/scene.md)* scene, [**Entity**](../../ecs/entity.md) entity | Wraps an existing scene entity as a camera without adding components. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**activate**](camera-activate.md) |  | Makes this camera the active camera in its scene. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setOrtho**](camera-set-ortho.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) left, [**float**](https://en.cppreference.com/cpp/keyword/float) right, [**float**](https://en.cppreference.com/cpp/keyword/float) bottom, [**float**](https://en.cppreference.com/cpp/keyword/float) top, [**float**](https://en.cppreference.com/cpp/keyword/float) nearValue, [**float**](https://en.cppreference.com/cpp/keyword/float) farValue | Configures orthographic projection with explicit clip planes and disables `autoResize`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPerspective**](camera-set-perspective.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) yfov, [**float**](https://en.cppreference.com/cpp/keyword/float) aspect, [**float**](https://en.cppreference.com/cpp/keyword/float) nearValue, [**float**](https://en.cppreference.com/cpp/keyword/float) farValue | Configures perspective projection (`yfov` in degrees) and disables `autoResize`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAutoResize**](camera-auto-resize.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) autoResize | Enables or disables automatic projection recalculation on canvas resize. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isAutoResize**](camera-auto-resize.md) |  | Returns `true` while automatic projection recalculation is enabled. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setNearClip**](camera-near-clip.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) nearValue | Sets the near clip plane distance. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getNearClip**](camera-near-clip.md) |  | Returns the near clip plane distance. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFarClip**](camera-far-clip.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) farValue | Sets the far clip plane distance. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getFarClip**](camera-far-clip.md) |  | Returns the far clip plane distance. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setLeftClip**](camera-left-clip.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) left | Sets the left orthographic extent and disables `autoResize`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getLeftClip**](camera-left-clip.md) |  | Returns the left orthographic extent. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setRightClip**](camera-right-clip.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) right | Sets the right orthographic extent and disables `autoResize`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getRightClip**](camera-right-clip.md) |  | Returns the right orthographic extent. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBottomClip**](camera-bottom-clip.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) bottom | Sets the bottom orthographic extent and disables `autoResize`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getBottomClip**](camera-bottom-clip.md) |  | Returns the bottom orthographic extent. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setTopClip**](camera-top-clip.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) top | Sets the top orthographic extent and disables `autoResize`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getTopClip**](camera-top-clip.md) |  | Returns the top orthographic extent. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAspect**](camera-aspect.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) aspect | Sets the perspective width-to-height ratio and disables `autoResize`. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getAspect**](camera-aspect.md) |  | Returns the perspective width-to-height ratio. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setYFov**](camera-yfov.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) yfov | Sets the vertical field-of-view in degrees. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getYFov**](camera-yfov.md) |  | Returns the vertical field-of-view in degrees. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setType**](camera-type.md) | [**CameraType**](../../../incomplete-docs.md) type | Switches projection mode and reapplies that mode's default clip planes. |
| [**CameraType**](../../../incomplete-docs.md) | [**getType**](camera-type.md) |  | Returns the current projection mode. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setTarget**](camera-target.md) | [**Vector3**](../../maths/vector3/vector3.md) target | Sets the look-at point and turns target mode on. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setTarget**](camera-target.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) y, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) z | Sets the look-at point from coordinates and turns target mode on. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**getTarget**](camera-target.md) |  | Returns the local look-at point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**disableTarget**](camera-disable-target.md) |  | Turns target mode off so the `Transform` rotation drives the view. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isUsingTarget**](camera-is-using-target.md) |  | Returns `true` while target mode is active. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setUp**](camera-up.md) | [**Vector3**](../../maths/vector3/vector3.md) up | Sets the local up vector used to build the view matrix. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setUp**](camera-up.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) y, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) z | Sets the local up vector from coordinates. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**getUp**](camera-up.md) |  | Returns the local up vector. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**getDirection**](camera-direction.md) |  | Returns the local forward vector in camera space. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**getRight**](camera-right.md) |  | Returns the local right vector in camera space. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**getWorldTarget**](camera-world-target.md) |  | Returns the look-at point in world space. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**getWorldDirection**](camera-world-direction.md) |  | Returns the forward vector in world space. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**getWorldUp**](camera-world-up.md) |  | Returns the up vector in world space. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**getWorldRight**](camera-world-right.md) |  | Returns the right vector in world space. |
| [**Matrix4**](../../maths/matrix4/matrix4.md) | [**getViewMatrix**](camera-view-matrix.md) |  | Returns the computed view matrix. |
| [**Matrix4**](../../maths/matrix4/matrix4.md) | [**getProjectionMatrix**](camera-projection-matrix.md) |  | Returns the computed projection matrix. |
| [**Matrix4**](../../maths/matrix4/matrix4.md) | [**getViewProjectionMatrix**](camera-view-projection-matrix.md) |  | Returns the combined view-projection matrix. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**rotateView**](camera-rotate-view.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) angle | Yaws the look direction around the up axis by `angle` degrees. Position stays fixed. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**rotatePosition**](camera-rotate-position.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) angle | Orbits the camera position around the target by `angle` degrees. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**elevateView**](camera-elevate-view.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) angle | Pitches the look direction up or down by `angle` degrees. Position stays fixed. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**elevatePosition**](camera-elevate-position.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) angle | Moves the camera position along a sphere centered at the target by `angle` degrees. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**walkForward**](camera-walk-forward.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) distance | Moves the camera and its target forward along the walk direction by `distance` units. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**zoom**](camera-zoom.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) distance | Moves the camera toward the target by `distance` units. Positive zooms in, negative zooms out. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**slide**](camera-slide.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) distance | Strafes the camera and its target along the local right vector. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**slideForward**](camera-slide-forward.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) distance | Moves the camera and its target along the local forward vector. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**slideUp**](camera-slide-up.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) distance | Moves the camera and its target along the local up vector. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setRenderToTexture**](camera-render-to-texture.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) renderToTexture | Enables or disables off-screen rendering to the internal framebuffer. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isRenderToTexture**](camera-render-to-texture.md) |  | Returns `true` while off-screen rendering is enabled. |
| [**Framebuffer\***](../../../incomplete-docs.md) | [**getFramebuffer**](camera-render-to-texture.md) |  | Returns the internal framebuffer. Valid only after `setRenderToTexture(true)`. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFramebufferSize**](camera-render-to-texture.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) width, [**int**](https://en.cppreference.com/cpp/keyword/int) height | Overrides the framebuffer resolution (defaults to 512x512). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFramebufferFilter**](camera-render-to-texture.md) | [**TextureFilter**](../../../incomplete-docs.md) filter | Sets the sampling filter of the framebuffer output texture. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setTransparentSort**](camera-transparent-sort.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) transparentSort | Enables or disables back-to-front sorting of transparent objects. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isTransparentSort**](camera-transparent-sort.md) |  | Returns `true` while transparent sorting is enabled. |
| [**Ray**](../../maths/ray/ray.md) | [**screenToRay**](camera-screen-to-ray.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y | Converts a canvas pixel position to a world-space picking ray. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getDistanceFromTarget**](camera-distance-from-target.md) |  | Returns the distance between the camera position and the target point. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**updateCamera**](camera-update-camera.md) |  | Forces an immediate recalculation of the view and projection matrices. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
