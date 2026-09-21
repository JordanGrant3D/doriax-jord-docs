[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Contact3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## Contact3D

`Contact3D` is one active 3D contact delivered to `PhysicsSystem::onContactAdded3D` / `PhysicsSystem::onContactPersisted3D` as `(Body3D, Body3D, Contact3D)`. The CharacterController reads the world-space normal for landing detection, the penetration depth for hard-landing checks, and tunes friction, restitution or sensor mode before the solver runs.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**combinedFriction**](contact-3d-combined-friction.md) | Combined friction the solver applies for this contact. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**combinedRestitution**](contact-3d-combined-restitution.md) | Combined bounciness applied for this contact. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**sensor**](contact-3d-sensor.md) | Trigger mode: contacts without impulse. |

## Constructors

| Arguments | Description |
| :--- | :--- |
| `Scene* scene, const JPH::Body* body1, const JPH::Body* body2, const JPH::ContactManifold* contactManifold, JPH::ContactSettings* contactSettings` | Builds a contact from raw Jolt bodies, manifold and settings (called by the engine). |
| `const Contact3D& rhs` | Copy constructor. |
|  | Destructor. |

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**JPH**](../../../../../incomplete-docs.md)::[**ContactManifold\***](../../../../../incomplete-docs.md) | [**getJoltContactManifold**](contact-3d-get-jolt-contact-manifold.md) |  | Raw Jolt contact manifold (C++ only). |
| [**JPH**](../../../../../incomplete-docs.md)::[**ContactSettings\***](../../../../../incomplete-docs.md) | [**getJoltContactSettings**](contact-3d-get-jolt-contact-settings.md) |  | Mutable Jolt contact settings (C++ only). |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getBaseOffset**](contact-3d-get-base-offset.md) |  | Base offset of the manifold in world space. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getWorldSpaceNormal**](contact-3d-get-world-space-normal.md) |  | Contact normal in world space; points up on floors. |
| [**float**](https://en.cppreference.com/cpp/keyword/float) | [**getPenetrationDepth**](contact-3d-get-penetration-depth.md) |  | How deep the shapes overlap. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**getShapeIndex1**](contact-3d-get-shape-index-1.md) |  | Shape index on the first body. |
| [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) | [**getShapeIndex2**](contact-3d-get-shape-index-2.md) |  | Shape index on the second body. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getRelativeContactPointsOnA**](contact-3d-get-relative-contact-points-on-a.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Contact point relative to body A. |
| [**Vector3**](../../../../maths/vector3/vector3.md) | [**getRelativeContactPointsOnB**](contact-3d-get-relative-contact-points-on-b.md) | [**size_t**](https://en.cppreference.com/w/cpp/types/size_t) index | Contact point relative to body B. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
