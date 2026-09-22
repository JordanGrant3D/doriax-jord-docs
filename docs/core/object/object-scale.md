---
version: 0.7.1
status: untested # Options: untested, bot-tested, human-tested
---

---
Object
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Object](object.md).setScale() / getScale() / getWorldScale()

Sets or gets the local scale of the object relative to its parent (or the world origin if it has no parent). `setScale(factor)` scales uniformly on all axes, while `setScale(Vector3)` scales each axis independently. `getScale()` returns the local scale, while `getWorldScale()` returns the scale with the full parent chain applied. A setup script sizes the object once the view loads, then reads both values back each frame.

```cpp
void setScale(const float factor);
void setScale(Vector3 scale);
Vector3 getScale() const;
Vector3 getWorldScale() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-scale.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-scale.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
