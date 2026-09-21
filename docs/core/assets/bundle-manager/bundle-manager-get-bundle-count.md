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

## [BundleManager](bundle-manager.md).getBundleCount()

Returns the number of registered bundles. The CharacterController loading screen uses it to size the replay-bundle progress bar.

```cpp
static int getBundleCount();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/bundle-manager/bundle-manager-get-bundle-count.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/bundle-manager/bundle-manager-get-bundle-count.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
