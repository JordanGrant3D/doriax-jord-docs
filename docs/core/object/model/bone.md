---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Bone
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Bone

`Bone` is a handle to a single joint of an imported skeleton. It adds no behaviour of its own — it inherits the full [`Object`](../object.md) transform API — so read and write its local position, rotation, and scale to override the authored animation procedurally (for example aiming a head bone while a walk cycle plays). Obtain one from [`Model::getBone()`](model-get-bone.md) by joint name or by glTF node index.

**Inherits:** [`Object`](../object.md)

## Constructors

| Arguments | Description |
| :--- | :--- |
| [**Scene**](../../scene/scene.md)* scene, [**Entity**](../../ecs/entity.md) entity | Wraps an existing scene entity as a bone. Normally obtained from [`Model::getBone()`](model-get-bone.md) rather than constructed directly. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**Bone**](bone.md)& rhs | Copy constructor. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
