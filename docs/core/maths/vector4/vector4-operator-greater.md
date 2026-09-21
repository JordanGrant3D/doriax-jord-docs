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

## [Vector4](vector4.md).operator>(const Vector4& v)

Strict greater-than on all four axes. Confirms every channel cleared a minimum activation threshold.

```cpp
bool operator>(const Vector4& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-operator-greater.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-operator-greater.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
