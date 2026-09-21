---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Matrix4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix4](matrix4.md).lookAtMatrix(eye, center, up)

Static chase-camera view builder from eye, target and up vectors. Reproduces CharacterController's `cam.setPosition(target - forward * distance)` + `setTarget` framing in one matrix.

```cpp
static Matrix4 lookAtMatrix(Vector3 eye, Vector3 center, Vector3 up);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-look-at.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-look-at.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
