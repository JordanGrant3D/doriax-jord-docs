---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).operator*(float f) / operator*(const Vector3& v)

Scalar multiplication scales every component; component-wise multiplication scales each axis independently. A free `float * Vector3` overload also exists.

```cpp
Vector3 operator*(float f) const;
Vector3 operator*(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-operator-multiply.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-operator-multiply.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
