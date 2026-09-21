---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Joint2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Joint2D](joint-2d.md).getBox2DJoint()

Returns the native Box2D joint handle so advanced users can call Box2D directly. Returns a null ID until a `set*` call creates the joint.

```cpp
b2JointId getBox2DJoint() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/joint-2d/joint-2d-get-box2d-joint.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/joint-2d/joint-2d-get-box2d-joint.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
