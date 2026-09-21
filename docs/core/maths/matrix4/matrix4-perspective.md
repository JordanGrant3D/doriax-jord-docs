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

## [Matrix4](matrix4.md).perspectiveMatrix(yfov, aspect, near, far)

Static symmetric perspective projection (`yfov` in radians). The standard third-person camera lens behind the CharacterController chase view.

```cpp
static Matrix4 perspectiveMatrix(float yfov, float aspect, float near, float far);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-perspective.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-perspective.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
