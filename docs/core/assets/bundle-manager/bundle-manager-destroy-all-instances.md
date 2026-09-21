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

## [BundleManager](bundle-manager.md).destroyAllInstances()

Destroys every tracked bundle instance belonging to `scene`, calling the appropriate destroyer for each. C++ only. The CharacterController tutorial calls it when tearing down the tutorial scene before loading the next level.

```cpp
static void destroyAllInstances(Scene* scene);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/bundle-manager/bundle-manager-destroy-all-instances.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/bundle-manager/bundle-manager-destroy-all-instances.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
