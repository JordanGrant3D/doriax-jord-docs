[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Model
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Model

`Model` loads and displays 3D model files in a scene. It extends `Mesh` with `loadModel` / `loadOBJ` / `loadGLTF` file loading (Wavefront OBJ and GLTF / binary GLB), skeletal animation via [**Animation**](../../action/animation/animation.md) and `Bone` handles, and blend-shape morph targets. A CharacterController-style script wraps its own entity (`Model model(getScene(), getEntity())`), loads `characters/hero.glb`, then drives the `Idle` / `Walk` / `Jump` clips with `playAnimation` crossfades.

## Constructors

| Arguments | Description |
| :--- | :--- |
| [**Scene**](../../../incomplete-docs.md)* scene | Constructs a model and adds its model component. |
| [**Scene**](../../../incomplete-docs.md)* scene, [**Entity**](../../ecs/entity.md) entity | Wraps an existing scene entity as a model without adding components. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadModel**](model-load-model.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& filename | Loads a 3D model file, detecting OBJ vs GLTF / GLB from the extension. Returns `true` on success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadOBJ**](model-load-obj.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& filename | Loads a Wavefront OBJ file explicitly. Returns `true` on success. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**loadGLTF**](model-load-gltf.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& filename | Loads a text GLTF or binary GLB file explicitly. Returns `true` on success. |
| [**Animation**](../../action/animation/animation.md) | [**getAnimation**](model-get-animation.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) index | Returns the animation clip at zero-based `index` as a handle for loop setup and manual playback. |
| [**Animation**](../../action/animation/animation.md) | [**findAnimation**](model-find-animation.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& name | Returns the animation clip matching the animation entity name. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**playAnimation**](model-play-animation.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) index | Crossfades to the clip at `index` using its authored default fade time. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**playAnimation**](model-play-animation.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) index, [**float**](https://en.cppreference.com/cpp/keyword/float) fadeTime | Crossfades to the clip at `index` over `fadeTime` seconds (`0` switches instantly). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**playAnimation**](model-play-animation.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& name | Crossfades to the named clip using its authored default fade time. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**playAnimation**](model-play-animation.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& name, [**float**](https://en.cppreference.com/cpp/keyword/float) fadeTime | Crossfades to the named clip over `fadeTime` seconds (`0` switches instantly). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**stopAnimations**](model-stop-animations.md) | [**float**](https://en.cppreference.com/cpp/keyword/float) fadeTime | Fades out every running clip on this model over `fadeTime` seconds. |
| [**Bone**](../../../incomplete-docs.md) | [**getBone**](model-get-bone.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& name | Returns the joint handle by bone name for procedural transform overrides. |
| [**Bone**](../../../incomplete-docs.md) | [**getBone**](model-get-bone.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) id | Returns the joint handle by glTF node index. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getMorphWeight**](model-get-morph-weight.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& name | Reads the blend-shape weight (`0.0` to `1.0`) by target name. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getMorphWeight**](model-get-morph-weight.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) id | Reads the blend-shape weight (`0.0` to `1.0`) by zero-based index. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMorphWeight**](model-set-morph-weight.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string)& name, [**float**](https://en.cppreference.com/cpp/keyword/float) value | Writes the blend-shape weight by target name. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setMorphWeight**](model-set-morph-weight.md) | [**int**](https://en.cppreference.com/cpp/keyword/int) id, [**float**](https://en.cppreference.com/cpp/keyword/float) value | Writes the blend-shape weight by zero-based index. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**resetToBindPose**](model-reset-to-bind-pose.md) |  | Resets every imported node to the file bind pose, clearing animation and programmatic overrides. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
