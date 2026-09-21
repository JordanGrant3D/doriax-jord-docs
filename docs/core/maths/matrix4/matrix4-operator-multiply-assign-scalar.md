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

## [Matrix4](matrix4.md).operator*=(float scalar)

Scales every entry in place and returns `*this`. Fades a telegraph matrix toward zero without touching its shape.

```cpp
Matrix4& operator*=(float scalar);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-operator-multiply-assign-scalar.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-operator-multiply-assign-scalar.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
