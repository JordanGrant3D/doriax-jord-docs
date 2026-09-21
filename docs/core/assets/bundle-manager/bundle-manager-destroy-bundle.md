---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
