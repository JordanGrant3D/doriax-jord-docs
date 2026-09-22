---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Body2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Body2D](body-2d.md).fixedRotation

When enabled, the body cannot rotate and stays upright. Useful for top-down characters that should never tip over.

```cpp
void setFixedRotation(bool fixedRotation);
bool isFixedRotation() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-fixed-rotation.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-fixed-rotation.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
