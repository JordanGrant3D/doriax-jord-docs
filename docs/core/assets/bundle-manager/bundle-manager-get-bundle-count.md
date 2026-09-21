[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
