[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Object
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Constructors

| Arguments | Description |
| :--- | :--- |
| [**Scene**](../../incomplete-docs.md)* scene | Constructs an object with a scene and initializes its transform component. |
| [**Scene**](../../incomplete-docs.md)* scene, [**Entity**](../ecs/entity.md) entity | Constructs an object wrapping an existing scene entity. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPosition**](../../incomplete-docs.md) | [**Vector3**](../../maths/vector3/vector3.md) position | Sets the local position of the object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPosition**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/const) [**float**](https://en.cppreference.com/cpp/keyword/float) x, [**const**](https://en.cppreference.com/cpp/keyword/float) y, [**const**](https://en.cppreference.com/cpp/keyword/float) z | Sets the local position of the object using separate coordinates. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setPosition**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/float) x, [**const**](https://en.cppreference.com/cpp/keyword/float) y | Sets the local 2D position of the object, with Z set to zero. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**getPosition**](../../incomplete-docs.md) | | Gets the local position of the object. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**getWorldPosition**](../../incomplete-docs.md) | | Gets the world position of the object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setRotation**](../../incomplete-docs.md) | [**Quaternion**](../../incomplete-docs.md) rotation | Sets the local rotation of the object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setRotation**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/float) xAngle, [**const**](https://en.cppreference.com/cpp/keyword/float) yAngle, [**const**](https://en.cppreference.com/cpp/keyword/float) zAngle | Sets the local rotation of the object using Euler angles. |
| [**Quaternion**](../../incomplete-docs.md) | [**getRotation**](../../incomplete-docs.md) | | Gets the local rotation of the object. |
| [**Quaternion**](../../incomplete-docs.md) | [**getWorldRotation**](../../incomplete-docs.md) | | Gets the world rotation of the object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setScale**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/float) factor | Sets uniform local scale across all axes. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setScale**](../../incomplete-docs.md) | [**Vector3**](../../maths/vector3/vector3.md) scale | Sets the local scale of the object. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**getScale**](../../incomplete-docs.md) | | Gets the local scale of the object. |
| [**Vector3**](../../maths/vector3/vector3.md) | [**getWorldScale**](../../incomplete-docs.md) | | Gets the world scale of the object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setVisible**](../../incomplete-docs.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) visible | Sets the visibility of the object and updates children. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isVisible**](../../incomplete-docs.md) | | Checks if the object is visible. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setVisibleOnly**](../../incomplete-docs.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) visible | Sets the visibility of the object without propagating to children. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBillboard**](../../incomplete-docs.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) billboard, [**bool**](https://en.cppreference.com/cpp/keyword/bool) fake, [**bool**](https://en.cppreference.com/cpp/keyword/bool) cylindrical | Configures billboard modes (standard, fake, and cylindrical). |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBillboard**](../../incomplete-docs.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) billboard | Enables or disables billboard mode. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isBillboard**](../../incomplete-docs.md) | | Checks if billboard mode is enabled. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBillboardRotation**](../../incomplete-docs.md) | [**Quaternion**](../../incomplete-docs.md) rotation | Sets the custom billboard rotation offset. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setBillboardRotation**](../../incomplete-docs.md) | [**const**](https://en.cppreference.com/cpp/keyword/float) xAngle, [**const**](https://en.cppreference.com/cpp/keyword/float) yAngle, [**const**](https://en.cppreference.com/cpp/keyword/float) zAngle | Sets the billboard rotation using Euler angles. |
| [**Quaternion**](../../incomplete-docs.md) | [**getBillboardRotation**](../../incomplete-docs.md) | | Gets the custom billboard rotation offset. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setFakeBillboard**](../../incomplete-docs.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) fakeBillboard | Enables or disables fake billboard mode. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isFakeBillboard**](../../incomplete-docs.md) | | Checks if fake billboard mode is enabled. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setCylindricalBillboard**](../../incomplete-docs.md) | [**bool**](https://en.cppreference.com/cpp/keyword/bool) cylindricalBillboard | Enables or disables cylindrical billboard mode. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**isCylindricalBillboard**](../../incomplete-docs.md) | | Checks if cylindrical billboard mode is enabled. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**setLocalMatrix**](../../incomplete-docs.md) | [**Matrix4**](../../incomplete-docs.md) localMatrix | Sets the local transformation matrix and decomposes it. |
| [**Matrix4**](../../incomplete-docs.md) | [**getLocalMatrix**](../../incomplete-docs.md) | | Gets the local transformation matrix. |
| [**Matrix4**](../../incomplete-docs.md) | [**getModelMatrix**](../../incomplete-docs.md) | | Gets the world model matrix. |
| [**Matrix4**](../../incomplete-docs.md) | [**getNormalMatrix**](../../incomplete-docs.md) | | Gets the normal matrix for lighting calculations. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addChild**](../../incomplete-docs.md) | [**Object**](../../incomplete-docs.md)* child | Adds a child object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**addChild**](../../incomplete-docs.md) | [**Entity**](../ecs/entity.md) child | Adds a child entity. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeChild**](../../incomplete-docs.md) | [**Object**](../../incomplete-docs.md)* child | Removes a child object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeChild**](../../incomplete-docs.md) | [**Entity**](../ecs/entity.md) child | Removes a child entity. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeParent**](../../incomplete-docs.md) | | Removes the parent relationship from this object. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**moveToTop**](../../incomplete-docs.md) | | Moves this child object to the top of its sibling order. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**moveUp**](../../incomplete-docs.md) | | Moves this child object up in its sibling order. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**moveDown**](../../incomplete-docs.md) | | Moves this child object down in its sibling order. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**moveToBottom**](../../incomplete-docs.md) | | Moves this child object to the bottom of its sibling order. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**updateTransform**](../../incomplete-docs.md) | | Forces an update of the object's transform via the render system. |
| [**Body2D**](physics/2D/body-2d/body-2d.md) | [**getBody2D**](../../incomplete-docs.md) | | Creates or gets the 2D physics body component. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeBody2D**](../../incomplete-docs.md) | | Removes the 2D physics body component. |
| [**Body3D**](../../incomplete-docs.md) | [**getBody3D**](../../incomplete-docs.md) | | Creates or gets the 3D physics body component. |
| [**void**](https://en.cppreference.com/cpp/keyword/void) | [**removeBody3D**](../../incomplete-docs.md) | | Removes the 3D physics body component. |
| [**Ray**](../../maths/ray/ray.md) | [**getRay**](../../incomplete-docs.md) | [**Vector3**](../../maths/vector3/vector3.md) direction | Generates a ray starting from the world position in a given direction. |