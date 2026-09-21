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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
