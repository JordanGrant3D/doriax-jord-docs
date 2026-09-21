---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Body3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Body3D](body-3d.md).maskBitsFilter

Collision mask of this body: which categories it collides with. Tune it so the character ignores triggers and scenery.

```cpp
uint16_t getMaskBitsFilter() const;
void setMaskBitsFilter(uint16_t mask);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-mask-bits-filter.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-mask-bits-filter.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
