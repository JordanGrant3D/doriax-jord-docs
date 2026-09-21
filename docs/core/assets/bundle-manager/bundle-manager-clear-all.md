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

## [BundleManager](bundle-manager.md).clearAll()

Removes all registered bundles and all tracked instances. Used by the editor when resetting state. The CharacterController tutorial test harness calls it to reset replay bundles between tutorial runs.

```cpp
static void clearAll();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/bundle-manager/bundle-manager-clear-all.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/bundle-manager/bundle-manager-clear-all.h"
```
