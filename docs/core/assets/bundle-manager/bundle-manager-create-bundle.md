[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
BundleManager
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [BundleManager](bundle-manager.md).createBundle()

Spawns an instance of a registered bundle into a scene and returns the root entity of the new hierarchy, or a null entity when the name/ID is not found or the factory fails. Every overload creates the instance root, so the same bundle can be spawned any number of times; the third argument only says where the new root is parented. The two-argument overloads leave the instance at the top level, the `parentName` overloads resolve that name in the given scene, the `EntityHandle` overloads use the scene already stored on the handle, and the `Entity` overloads parent under an existing entity id that must belong to the scene. The CharacterController tutorial spawns the `tutorial/player` rig under the level spawn point.

```cpp
static Entity createBundle(const std::string& name, Scene* scene);
static Entity createBundle(uint32_t id, Scene* scene);
static Entity createBundle(const std::string& name, Scene* scene, const std::string& parentName);
static Entity createBundle(uint32_t id, Scene* scene, const std::string& parentName);
static Entity createBundle(const std::string& name, const EntityHandle& parent);
static Entity createBundle(uint32_t id, const EntityHandle& parent);
static Entity createBundle(const std::string& name, Scene* scene, Entity parent);
static Entity createBundle(uint32_t id, Scene* scene, Entity parent);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/bundle-manager/bundle-manager-create-bundle.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/bundle-manager/bundle-manager-create-bundle.h"
```
