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

## [Matrix4](matrix4.md).operator==(const Matrix4& m)

Byte-wise equality via `memcmp`. Confirms a rebuilt world matrix converged back to the tuned spawn.

```cpp
bool operator==(const Matrix4& m) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-operator-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-operator-equal.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
