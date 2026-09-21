---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).inverse()

Full inverse (conjugate over norm). Un-rotates a world offset back into character space; returns `NULL` when degenerate.

```cpp
Quaternion inverse() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-inverse.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-inverse.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
