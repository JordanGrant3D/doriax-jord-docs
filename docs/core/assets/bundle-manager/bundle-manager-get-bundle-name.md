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

## [BundleManager](bundle-manager.md).getBundleName()

Looks up a bundle's name by numeric ID. Returns an empty string when not found. The CharacterController tutorial logs the name behind a replay bundle ID for loading progress.

```cpp
static std::string getBundleName(uint32_t id);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/bundle-manager/bundle-manager-get-bundle-name.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/bundle-manager/bundle-manager-get-bundle-name.h"
```
