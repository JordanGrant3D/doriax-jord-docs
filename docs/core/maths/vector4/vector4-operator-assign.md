---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).operator=(const Vector4&) / operator=(float) / operator=(const Vector3&)

Copy-assign copies all four components; scalar-assign fills every component with one value; `Vector3`-assign copies X, Y and Z while leaving W untouched. Returns `*this` so assignments chain.

```cpp
Vector4& operator=(const Vector4& rkVector);
Vector4& operator=(const float fScalar);
Vector4& operator=(const Vector3& rhs);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-operator-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-operator-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
