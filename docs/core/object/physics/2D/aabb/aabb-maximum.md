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

## [AABB](aabb.md).setMaximum() / getMaximum()

Accessors for the maximum (upper) corner of the box. The non-const `getMaximum()` overload returns a mutable reference, and the per-axis setters adjust a single component.

```cpp
const Vector3& getMaximum() const;
Vector3& getMaximum();
void setMaximum( const Vector3& vec );
void setMaximum( float x, float y, float z );
void setMaximumX( float x );
void setMaximumY( float y );
void setMaximumZ( float z );
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/aabb/aabb-maximum.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/aabb/aabb-maximum.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
