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

## [Vector4](vector4.md).operator<(const Vector4& v)

Strict less-than on all four axes. Confirms every blend weight sits below its per-channel cap.

```cpp
bool operator<(const Vector4& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-operator-less.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-operator-less.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
