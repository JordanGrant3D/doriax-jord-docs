---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Contact3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Contact3D](contact-3d.md).getJoltContactSettings()

Mutable Jolt contact settings for C++ gameplay code. Write combined friction or restitution here before the solver runs.

```cpp
JPH::ContactSettings* getJoltContactSettings() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/contact-3d/contact-3d-get-jolt-contact-settings.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/contact-3d/contact-3d-get-jolt-contact-settings.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
