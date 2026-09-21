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

## [Contact3D](contact-3d.md).getPenetrationDepth()

How deep the shapes overlap. Compare it against a threshold to separate soft touches from hard landings.

```cpp
float getPenetrationDepth() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/contact-3d/contact-3d-get-penetration-depth.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/contact-3d/contact-3d-get-penetration-depth.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
