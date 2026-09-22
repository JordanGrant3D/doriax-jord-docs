---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
AABB
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [AABB](aabb.md).setMinimum() / getMinimum()

Accessors for the minimum (lower) corner of the box. The non-const `getMinimum()` overload returns a mutable reference, and the per-axis setters adjust a single component.

```cpp
const Vector3& getMinimum() const;
Vector3& getMinimum();
void setMinimum( const Vector3& vec );
void setMinimum( float x, float y, float z );
void setMinimumX(float x);
void setMinimumY(float y);
void setMinimumZ(float z);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/aabb/aabb-minimum.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/aabb/aabb-minimum.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
