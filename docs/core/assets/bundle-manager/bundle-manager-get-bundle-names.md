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

## [BundleManager](bundle-manager.md).getBundleNames()

Returns all registered bundle names in registration order. The CharacterController tutorial lists them to build the replay-bundle picker.

```cpp
static std::vector<std::string> getBundleNames();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/bundle-manager/bundle-manager-get-bundle-names.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/bundle-manager/bundle-manager-get-bundle-names.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
