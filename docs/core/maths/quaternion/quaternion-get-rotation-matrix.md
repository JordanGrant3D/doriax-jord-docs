---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).getRotationMatrix()

Converts to a 4x4 rotation matrix. Feeds facing quaternions into matrix-only APIs (physics transforms, shader uniforms).

```cpp
Matrix4 getRotationMatrix() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-get-rotation-matrix.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-get-rotation-matrix.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
