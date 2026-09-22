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

## [Object](object.md).setPosition() / getPosition() / getWorldPosition()

Sets or gets the local position of the object relative to its parent (or the world origin if it has no parent). The two-argument `setPosition(x, y)` overload sets `z` to `0`, which is handy for 2D scenes. `getPosition()` returns the local position, while `getWorldPosition()` returns the position with the full parent chain applied. A spawn script places the object once the view loads, then reads both values back each frame.

```cpp
void setPosition(Vector3 position);
void setPosition(const float x, const float y, const float z);
void setPosition(const float x, const float y);
Vector3 getPosition() const;
Vector3 getWorldPosition() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-position.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-position.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
