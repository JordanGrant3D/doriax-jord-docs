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

## [Matrix4](matrix4.md).operator!=(const Matrix4& m)

Byte-wise inequality via `memcmp`. Refreshes derived spawn data only while the world matrix is actually changing.

```cpp
bool operator!=(const Matrix4& m) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-operator-not-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-operator-not-equal.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
