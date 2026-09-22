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

## [Body2D](body-2d.md).maskBitsFilter

Which collision layers this shape collides with. A contact needs this mask to include the other body's category bits, and vice versa.

```cpp
void setMaskBitsFilter(uint16_t maskBits);
void setMaskBitsFilter(size_t shapeIndex, uint16_t maskBits);
uint16_t getMaskBitsFilter() const;
uint16_t getMaskBitsFilter(size_t shapeIndex) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-mask-bits-filter.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-mask-bits-filter.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
