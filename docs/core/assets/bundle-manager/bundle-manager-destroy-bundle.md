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

## [BundleManager](bundle-manager.md).destroyBundle()

Destroys a bundle instance by its root entity, removing every entity the spawn created (children first, then the root) while leaving the entity the instance was parented to untouched. When the bundle was registered with a custom destroyer, that runs instead of the default destruction. Returns `false` when `rootEntity` is not a tracked bundle root. Note the argument order: scene first, then the root entity. The CharacterController tutorial despawns the `tutorial/player` rig on level reset.

```cpp
static bool destroyBundle(Scene* scene, Entity rootEntity);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/bundle-manager/bundle-manager-destroy-bundle.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/bundle-manager/bundle-manager-destroy-bundle.h"
```
