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

## [Vector4](vector4.md).operator/(const Vector4&) / operator/(float)

Component-wise division normalizes each channel against a per-channel maximum; scalar division dims uniformly. A free `float / Vector4` overload covers the reversed order.

```cpp
Vector4 operator/(const float fScalar) const;
Vector4 operator/(const Vector4& rhs) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-operator-divide.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-operator-divide.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
