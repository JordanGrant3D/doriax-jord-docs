---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
ResourceBuildInfo
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [ResourceBuildInfo](resource-build-info.md).name

Name of the resource being built. Loading screens use it as the warmup-row label (`"Now warming: Hero_Run"`), and it is the same string passed as `name` to [ResourceProgress::startBuild](../resource-progress/resource-progress-start-build.md).

```cpp
std::string name;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-build-info/resource-build-info-name.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-build-info/resource-build-info-name.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
