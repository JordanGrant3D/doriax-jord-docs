---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Scene
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Scene

The root container for all objects, systems, and resources in a project. `Scene` manages the active camera, background color, lighting, shadows, and the update/draw lifecycle. Gameplay code obtains the live scene with `EntityHandle::getScene()` — never construct one directly.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**Vector4**](../maths/vector4/vector4.md) | [**backgroundColor**](scene-background-color.md) | Background clear color of the scene in RGBA [0, 1] range. |
| [**ShadowQuality**](shadow-quality/shadow-quality.md) | [**shadowQuality**](scene-shadow-quality.md) | PCF filter quality of 3D shadow map edges. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**ssaoEnabled**](scene-ssao-enabled.md) | Whether screen-space ambient occlusion is enabled. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**ssaoRadius**](scene-ssao-radius.md) | View-space SSAO sampling radius in world units. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**ssaoIntensity**](scene-ssao-intensity.md) | Strength of the screen-space ambient occlusion effect. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**ssaoBias**](scene-ssao-bias.md) | View-space depth bias preventing SSAO self-occlusion artifacts. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**ssaoDebug**](scene-ssao-debug.md) | Whether the raw SSAO buffer is shown as grayscale. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**ssrEnabled**](scene-ssr-enabled.md) | Whether screen-space reflections are enabled. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**ssrMaxDistance**](scene-ssr-max-distance.md) | Maximum screen-space reflection ray length in view-space units. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**ssrThickness**](scene-ssr-thickness.md) | Depth-compare tolerance for accepting an SSR ray hit. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**ssrMaxSteps**](scene-ssr-max-steps.md) | Linear march sample count of screen-space reflections. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**ssrIntensity**](scene-ssr-intensity.md) | Overall screen-space reflection strength multiplier. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**ssrBlur**](scene-ssr-blur.md) | Glossy blur amount of screen-space reflections in `[0..1]`. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**ssrDebugMode**](scene-ssr-debug-mode.md) | Full-screen debug visualization of the SSR G-buffer. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**fixedResolutionEnabled**](scene-fixed-resolution-enabled.md) | Whether the main camera renders into a fixed-size buffer. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**fixedResolutionWidth**](scene-fixed-resolution-width.md) | Internal render width in pixels used when fixed resolution is on. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**fixedResolutionHeight**](scene-fixed-resolution-height.md) | Internal render height in pixels used when fixed resolution is on. |
| [**TextureFilter**](../assets/texture/texture-filter.md) | [**fixedResolutionFilter**](scene-fixed-resolution-filter.md) | Sampling filter used when upscaling the fixed-resolution image. |
| [**LightState**](light-state/light-state.md) | [**lightState**](scene-light-state.md) | Whether the render system activates the lighting pass. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**globalIlluminationIntensity**](scene-global-illumination.md) | Brightness of the ambient light applied uniformly across the scene. |
| [**Vector3**](../maths/vector3/vector3.md) | [**globalIlluminationColor**](scene-global-illumination.md) | Tint of the ambient light applied uniformly across the scene. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**ambientLight2DIntensity**](scene-ambient-light-2d.md) | Brightness of the ambient light for the 2D lighting path. |
| [**Vector3**](../maths/vector3/vector3.md) | [**ambientLight2DColor**](scene-ambient-light-2d.md) | Tint of the ambient light for the 2D lighting path. |
| [**ShadowQuality**](shadow-quality/shadow-quality.md) | [**shadow2DQuality**](scene-shadow-2d-quality.md) | Filter quality of 2D light shadows. |
| [**Vector2**](../maths/vector2/vector2.md) | [**gravity2D**](scene-gravity-2d.md) | Gravity of the 2D physics world in meters per second squared. |
| [**Vector3**](../maths/vector3/vector3.md) | [**gravity3D**](scene-gravity-3d.md) | Gravity of the 3D physics world in meters per second squared. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**defaultMeshShader**](scene-default-mesh-shader.md) | Scene-wide custom shader for Mesh components. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**defaultUIShader**](scene-default-ui-shader.md) | Scene-wide custom shader for UI components. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**defaultSkyShader**](scene-default-sky-shader.md) | Scene-wide custom shader for the Sky component. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**defaultPointsShader**](scene-default-points-shader.md) | Scene-wide custom shader for Points components. |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**defaultLinesShader**](scene-default-lines-shader.md) | Scene-wide custom shader for Lines components. |
| [**UIEventState**](ui-event-state/ui-event-state.md) | [**enableUIEvents**](scene-enable-ui-events.md) | Per-scene override for UI event routing. |

## Constructors

| Arguments | Description |
| :--- | :--- |
|  | Default constructor. Creates an empty scene and registers the default subsystems. |
| [**EntityPool**](entity-pool/entity-pool.md) defaultPool | Creates an empty scene with a custom entity pool and registers the default subsystems. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**load**](scene-load.md) |  | Initializes the scene subsystems. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**destroy**](scene-destroy.md) |  | Tears down all subsystems and destroys every entity. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**draw**](scene-draw.md) |  | Triggers a render pass for this scene. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**update**](scene-update.md) | [**double**](https://en.cppreference.com/cpp/keyword/double) dt | Runs one variable-step update for all subscribed systems. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**fixedUpdate**](scene-fixed-update.md) | [**double**](https://en.cppreference.com/cpp/keyword/double) dt | Runs one fixed-step update for physics and time-sensitive systems. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setCamera**](scene-set-camera.md) | [**Camera**](../object/camera/camera.md)\* camera | Sets the active camera from a `Camera` object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setCamera**](scene-set-camera.md) | [**Entity**](../ecs/entity.md) camera | Sets the active camera from its entity handle. |
| [**Entity**](../ecs/entity.md) | [**getCamera**](scene-get-camera.md) |  | Returns the entity handle of the active camera. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBackgroundColor**](scene-background-color.md) | [**Vector4**](../maths/vector4/vector4.md) color | Sets the background clear color. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBackgroundColor**](scene-background-color.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) red, [**float**](https://en.cppreference.com/cpp/keyword/float) green, [**float**](https://en.cppreference.com/cpp/keyword/float) blue | Sets the background clear color from RGB floats. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBackgroundColor**](scene-background-color.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) red, [**float**](https://en.cppreference.com/cpp/keyword/float) green, [**float**](https://en.cppreference.com/cpp/keyword/float) blue, [**float**](https://en.cppreference.com/cpp/keyword/float) alpha | Sets the background clear color from RGBA floats. |
| [**Vector4**](../maths/vector4/vector4.md) | [**getBackgroundColor**](scene-background-color.md) |  | Returns the background clear color. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShadowQuality**](scene-shadow-quality.md) | [**ShadowQuality**](shadow-quality/shadow-quality.md) quality | Sets the PCF filter quality of 3D shadow map edges. |
| [**ShadowQuality**](shadow-quality/shadow-quality.md) | [**getShadowQuality**](scene-shadow-quality.md) |  | Returns the 3D shadow map filter quality. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSSAOEnabled**](scene-ssao-enabled.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) ssaoEnabled | Enables screen-space ambient occlusion. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isSSAOEnabled**](scene-ssao-enabled.md) |  | Returns whether SSAO is enabled. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSSAORadius**](scene-ssao-radius.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) radius | Sets the SSAO sampling radius in world units. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getSSAORadius**](scene-ssao-radius.md) |  | Returns the SSAO sampling radius. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSSAOIntensity**](scene-ssao-intensity.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) intensity | Sets the SSAO effect strength. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getSSAOIntensity**](scene-ssao-intensity.md) |  | Returns the SSAO effect strength. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSSAOBias**](scene-ssao-bias.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) bias | Sets the SSAO depth bias. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getSSAOBias**](scene-ssao-bias.md) |  | Returns the SSAO depth bias. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSSAODebug**](scene-ssao-debug.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) debug | Enables the SSAO grayscale debug view. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isSSAODebug**](scene-ssao-debug.md) |  | Returns whether the SSAO debug view is on. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSSREnabled**](scene-ssr-enabled.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) ssrEnabled | Enables screen-space reflections. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isSSREnabled**](scene-ssr-enabled.md) |  | Returns whether SSR is enabled. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSSRMaxDistance**](scene-ssr-max-distance.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) maxDistance | Sets the maximum SSR ray length. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getSSRMaxDistance**](scene-ssr-max-distance.md) |  | Returns the maximum SSR ray length. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSSRThickness**](scene-ssr-thickness.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) thickness | Sets the SSR depth-compare tolerance. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getSSRThickness**](scene-ssr-thickness.md) |  | Returns the SSR depth-compare tolerance. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSSRMaxSteps**](scene-ssr-max-steps.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) maxSteps | Sets the SSR march sample count. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getSSRMaxSteps**](scene-ssr-max-steps.md) |  | Returns the SSR march sample count. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSSRIntensity**](scene-ssr-intensity.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) intensity | Sets the SSR strength multiplier. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getSSRIntensity**](scene-ssr-intensity.md) |  | Returns the SSR strength multiplier. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSSRBlur**](scene-ssr-blur.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) blur | Sets the SSR glossy blur amount. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getSSRBlur**](scene-ssr-blur.md) |  | Returns the SSR glossy blur amount. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setSSRDebugMode**](scene-ssr-debug-mode.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) mode | Sets the SSR G-buffer debug visualization. |
| [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getSSRDebugMode**](scene-ssr-debug-mode.md) |  | Returns the SSR debug visualization mode. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFixedResolutionEnabled**](scene-fixed-resolution-enabled.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) fixedResolutionEnabled | Enables fixed-resolution rendering. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isFixedResolutionEnabled**](scene-fixed-resolution-enabled.md) |  | Returns whether fixed resolution is enabled. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFixedResolutionWidth**](scene-fixed-resolution-width.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) width | Sets the fixed internal render width. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getFixedResolutionWidth**](scene-fixed-resolution-width.md) |  | Returns the fixed internal render width. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFixedResolutionHeight**](scene-fixed-resolution-height.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) height | Sets the fixed internal render height. |
| [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) | [**getFixedResolutionHeight**](scene-fixed-resolution-height.md) |  | Returns the fixed internal render height. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFixedResolutionSize**](scene-fixed-resolution-size.md) | [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) width, [**unsigned**](https://en.cppreference.com/cpp/keyword/unsigned) [**int**](https://en.cppreference.com/cpp/keyword/int) height | Sets the fixed internal render size. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFixedResolutionFilter**](scene-fixed-resolution-filter.md) | [**TextureFilter**](../assets/texture/texture-filter.md) filter | Sets the fixed-resolution upscale filter. |
| [**TextureFilter**](../assets/texture/texture-filter.md) | [**getFixedResolutionFilter**](scene-fixed-resolution-filter.md) |  | Returns the fixed-resolution upscale filter. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setLightState**](scene-light-state.md) | [**LightState**](light-state/light-state.md) state | Controls whether the lighting pass is activated. |
| [**LightState**](light-state/light-state.md) | [**getLightState**](scene-light-state.md) |  | Returns the lighting activation state. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setGlobalIllumination**](scene-global-illumination.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) intensity, [**Vector3**](../maths/vector3/vector3.md) color | Sets global illumination brightness and tint. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setGlobalIllumination**](scene-global-illumination.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) intensity | Sets global illumination brightness. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setGlobalIllumination**](scene-global-illumination.md) | [**Vector3**](../maths/vector3/vector3.md) color | Sets the global illumination tint. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getGlobalIlluminationIntensity**](scene-global-illumination.md) |  | Returns the global illumination brightness. |
| [**Vector3**](../maths/vector3/vector3.md) | [**getGlobalIlluminationColor**](scene-global-illumination.md) |  | Returns the global illumination tint. |
| [**Vector3**](../maths/vector3/vector3.md) | [**getGlobalIlluminationColorLinear**](scene-global-illumination.md) |  | Returns the linear-space global illumination tint. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAmbientLight2D**](scene-ambient-light-2d.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) intensity, [**Vector3**](../maths/vector3/vector3.md) color | Sets 2D ambient brightness and tint. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAmbientLight2D**](scene-ambient-light-2d.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) intensity | Sets 2D ambient brightness. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setAmbientLight2D**](scene-ambient-light-2d.md) | [**Vector3**](../maths/vector3/vector3.md) color | Sets the 2D ambient tint. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getAmbientLight2DIntensity**](scene-ambient-light-2d.md) |  | Returns the 2D ambient brightness. |
| [**Vector3**](../maths/vector3/vector3.md) | [**getAmbientLight2DColor**](scene-ambient-light-2d.md) |  | Returns the 2D ambient tint. |
| [**Vector3**](../maths/vector3/vector3.md) | [**getAmbientLight2DColorLinear**](scene-ambient-light-2d.md) |  | Returns the linear-space 2D ambient tint. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setShadow2DQuality**](scene-shadow-2d-quality.md) | [**ShadowQuality**](shadow-quality/shadow-quality.md) quality | Sets the filter quality of 2D light shadows. |
| [**ShadowQuality**](shadow-quality/shadow-quality.md) | [**getShadow2DQuality**](scene-shadow-2d-quality.md) |  | Returns the 2D shadow filter quality. |
| [**Vector2**](../maths/vector2/vector2.md) | [**getGravity2D**](scene-gravity-2d.md) |  | Returns the 2D physics world gravity. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setGravity2D**](scene-gravity-2d.md) | [**Vector2**](../maths/vector2/vector2.md) gravity | Sets the 2D physics world gravity. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setGravity2D**](scene-gravity-2d.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y | Sets the 2D physics world gravity from components. |
| [**Vector3**](../maths/vector3/vector3.md) | [**getGravity3D**](scene-gravity-3d.md) |  | Returns the 3D physics world gravity. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setGravity3D**](scene-gravity-3d.md) | [**Vector3**](../maths/vector3/vector3.md) gravity | Sets the 3D physics world gravity. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setGravity3D**](scene-gravity-3d.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**float**](https://en.cppreference.com/cpp/keyword/float) y, [**float**](https://en.cppreference.com/cpp/keyword/float) z | Sets the 3D physics world gravity from components. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setDefaultMeshShader**](scene-default-mesh-shader.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& path | Sets the scene-wide Mesh custom shader. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& | [**getDefaultMeshShader**](scene-default-mesh-shader.md) |  | Returns the scene-wide Mesh custom shader path. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setDefaultUIShader**](scene-default-ui-shader.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& path | Sets the scene-wide UI custom shader. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& | [**getDefaultUIShader**](scene-default-ui-shader.md) |  | Returns the scene-wide UI custom shader path. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setDefaultSkyShader**](scene-default-sky-shader.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& path | Sets the scene-wide Sky custom shader. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& | [**getDefaultSkyShader**](scene-default-sky-shader.md) |  | Returns the scene-wide Sky custom shader path. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setDefaultPointsShader**](scene-default-points-shader.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& path | Sets the scene-wide Points custom shader. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& | [**getDefaultPointsShader**](scene-default-points-shader.md) |  | Returns the scene-wide Points custom shader path. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setDefaultLinesShader**](scene-default-lines-shader.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& path | Sets the scene-wide Lines custom shader. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& | [**getDefaultLinesShader**](scene-default-lines-shader.md) |  | Returns the scene-wide Lines custom shader path. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setDefaultCustomShader**](scene-default-custom-shader.md) | [**ShaderType**](shader-type/shader-type.md) type, [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& path | Sets the scene-wide custom shader for a category. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& | [**getDefaultCustomShader**](scene-default-custom-shader.md) | [**ShaderType**](shader-type/shader-type.md) type | Returns the scene-wide custom shader path for a category. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**canReceiveUIEvents**](scene-can-receive-ui-events.md) |  | Returns whether this scene can receive UI pointer events. |
| [**UIEventState**](ui-event-state/ui-event-state.md) | [**getEnableUIEvents**](scene-enable-ui-events.md) |  | Returns the per-scene UI event override. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setEnableUIEvents**](scene-enable-ui-events.md) | [**UIEventState**](ui-event-state/ui-event-state.md) enableUIEvents | Overrides per-scene UI event routing. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**enableUIEvents**](scene-enable-ui-events.md) |  | Enables UI events for this scene. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isEnableUIEvents**](scene-enable-ui-events.md) |  | Returns whether UI events are enabled. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setEnableUIEvents**](scene-enable-ui-events.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) enableUIEvents | Enables or disables UI events for this scene. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**updateCameraSize**](scene-update-camera-size.md) |  | Recalculates the active camera projection for the canvas size. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeSubscriptionsByTag**](scene-remove-subscriptions-by-tag.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& substring | Removes event subscriptions whose tag contains `substring`. |
| **[**std::shared_ptr**](https://en.cppreference.com/w/cpp/memory/shared_ptr)<[**T**](https://en.cppreference.com/w/cpp/language/template)>** | [**registerSystem**](scene-register-system.md) |  | Registers a subsystem of type `T` on this scene. |
| **[**std::shared_ptr**](https://en.cppreference.com/w/cpp/memory/shared_ptr)<[**T**](https://en.cppreference.com/w/cpp/language/template)>** | [**getSystem**](scene-get-system.md) |  | Returns the registered subsystem of type `T`. |

Entity and hierarchy methods — `createEntity`, `destroyEntity`, `findEntity`, and component access — are inherited from `EntityRegistry`.


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
