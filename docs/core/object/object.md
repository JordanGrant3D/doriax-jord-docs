---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Object
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Object

`Object` is the base class for all scene objects. It wraps an ECS entity (inherits `EntityHandle`) and exposes the transform (position, rotation, scale), parent–child hierarchy, visibility, billboard orientation, direct matrix access, and shortcuts to the 2D/3D physics body attachments.

## Constructors

| Arguments | Description |
| :--- | :--- |
| [**Scene**](../scene/scene.md)* scene | Constructs an object with a scene and initializes its transform component. |
| [**Scene**](../scene/scene.md)* scene, [**Entity**](../ecs/entity.md) entity | Constructs an object wrapping an existing scene entity. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPosition**](object-position.md) | [**Vector3**](../maths/vector3/vector3.md) position | Sets the local position of the object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPosition**](object-position.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) y, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) z | Sets the local position of the object using separate coordinates. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPosition**](object-position.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) y | Sets the local 2D position of the object, with Z set to zero. |
| [**Vector3**](../maths/vector3/vector3.md) | [**getPosition**](object-position.md) |  | Gets the local position of the object. |
| [**Vector3**](../maths/vector3/vector3.md) | [**getWorldPosition**](object-position.md) |  | Gets the world position of the object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setRotation**](object-rotation.md) | [**Quaternion**](../maths/quaternion/quaternion.md) rotation | Sets the local rotation of the object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setRotation**](object-rotation.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) xAngle, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) yAngle, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) zAngle | Sets the local rotation of the object using Euler angles. |
| [**Quaternion**](../maths/quaternion/quaternion.md) | [**getRotation**](object-rotation.md) |  | Gets the local rotation of the object. |
| [**Quaternion**](../maths/quaternion/quaternion.md) | [**getWorldRotation**](object-rotation.md) |  | Gets the world rotation of the object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setScale**](object-scale.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) factor | Sets uniform local scale across all axes. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setScale**](object-scale.md) | [**Vector3**](../maths/vector3/vector3.md) scale | Sets the local scale of the object. |
| [**Vector3**](../maths/vector3/vector3.md) | [**getScale**](object-scale.md) |  | Gets the local scale of the object. |
| [**Vector3**](../maths/vector3/vector3.md) | [**getWorldScale**](object-scale.md) |  | Gets the world scale of the object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setVisible**](object-visibility.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) visible | Sets the visibility of the object and updates children. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isVisible**](object-visibility.md) |  | Checks if the object is visible. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setVisibleOnly**](object-visibility.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) visible | Sets the visibility of the object without propagating to children. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBillboard**](object-billboard.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) billboard, [**bool**](https://en.cppreference.com/cpp/keyword/bool) fake, [**bool**](https://en.cppreference.com/cpp/keyword/bool) cylindrical | Configures billboard modes (standard, fake, and cylindrical). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBillboard**](object-billboard.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) billboard | Enables or disables billboard mode. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isBillboard**](object-billboard.md) |  | Checks if billboard mode is enabled. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBillboardRotation**](object-billboard-rotation.md) | [**Quaternion**](../maths/quaternion/quaternion.md) rotation | Sets the custom billboard rotation offset. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBillboardRotation**](object-billboard-rotation.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) xAngle, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) yAngle, [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) zAngle | Sets the billboard rotation using Euler angles. |
| [**Quaternion**](../maths/quaternion/quaternion.md) | [**getBillboardRotation**](object-billboard-rotation.md) |  | Gets the custom billboard rotation offset. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFakeBillboard**](object-billboard.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) fakeBillboard | Enables or disables fake billboard mode. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isFakeBillboard**](object-billboard.md) |  | Checks if fake billboard mode is enabled. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setCylindricalBillboard**](object-billboard.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) cylindricalBillboard | Enables or disables cylindrical billboard mode. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isCylindricalBillboard**](object-billboard.md) |  | Checks if cylindrical billboard mode is enabled. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setLocalMatrix**](object-transform-matrix.md) | [**Matrix4**](../maths/matrix4/matrix4.md) localMatrix | Sets the local transformation matrix and decomposes it. |
| [**Matrix4**](../maths/matrix4/matrix4.md) | [**getLocalMatrix**](object-transform-matrix.md) |  | Gets the local transformation matrix. |
| [**Matrix4**](../maths/matrix4/matrix4.md) | [**getModelMatrix**](object-transform-matrix.md) |  | Gets the world model matrix. |
| [**Matrix4**](../maths/matrix4/matrix4.md) | [**getNormalMatrix**](object-transform-matrix.md) |  | Gets the normal matrix for lighting calculations. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addChild**](object-add-child.md) | [**Object**](object.md)* child | Adds a child object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addChild**](object-add-child.md) | [**Entity**](../ecs/entity.md) child | Adds a child entity. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeChild**](object-remove-child.md) | [**Object**](object.md)* child | Removes a child object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeChild**](object-remove-child.md) | [**Entity**](../ecs/entity.md) child | Removes a child entity. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeParent**](object-remove-parent.md) |  | Removes the parent relationship from this object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**moveToTop**](object-move-order.md) |  | Moves this child object to the top of its sibling order. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**moveUp**](object-move-order.md) |  | Moves this child object up in its sibling order. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**moveDown**](object-move-order.md) |  | Moves this child object down in its sibling order. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**moveToBottom**](object-move-order.md) |  | Moves this child object to the bottom of its sibling order. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**updateTransform**](object-update-transform.md) |  | Forces an update of the object's transform via the render system. |
| [**Body2D**](physics/2D/body-2d/body-2d.md) | [**getBody2D**](object-body-2d.md) |  | Creates or gets the 2D physics body component. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeBody2D**](object-body-2d.md) |  | Removes the 2D physics body component. |
| [**Body3D**](physics/3D/body-3d/body-3d.md) | [**getBody3D**](object-body-3d.md) |  | Creates or gets the 3D physics body component. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeBody3D**](object-body-3d.md) |  | Removes the 3D physics body component. |
| [**Ray**](../maths/ray/ray.md) | [**getRay**](object-get-ray.md) | [**Vector3**](../maths/vector3/vector3.md) direction | Generates a ray starting from the world position in a given direction. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
