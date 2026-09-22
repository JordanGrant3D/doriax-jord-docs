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

## [Object](object.md).setRotation() / getRotation() / getWorldRotation()

Sets or gets the local rotation of the object relative to its parent (or the world origin if it has no parent). The Euler overload takes `x`/`y`/`z` angles in **ZYX** order, the same default as `Quaternion(x, y, z)`. Angles are in degrees when `Engine::useDegrees` is `true`. `getRotation()` returns the local rotation, while `getWorldRotation()` returns the rotation with the full parent chain applied. A facing script turns the object once the view loads, then reads both values back each frame.

```cpp
void setRotation(Quaternion rotation);
void setRotation(const float xAngle, const float yAngle, const float zAngle);
Quaternion getRotation() const;
Quaternion getWorldRotation() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-rotation.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-rotation.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
