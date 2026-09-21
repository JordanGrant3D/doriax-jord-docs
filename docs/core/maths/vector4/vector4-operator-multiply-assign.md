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

## [Vector4](vector4.md).operator*=(const Vector4&) / operator*=(float)

In-place multiplication: apply a per-channel mask, or scale global intensity. Returns `*this`.

```cpp
Vector4& operator*=(const float fScalar);
Vector4& operator*=(const Vector4& rkVector);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-operator-multiply-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-operator-multiply-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
