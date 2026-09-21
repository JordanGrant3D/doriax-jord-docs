---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Matrix3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix3](matrix3.md).inverse(float fTolerance)

Returns the inverted matrix, or a zero matrix when `|det| <= fTolerance`. Un-rotates a world-space offset back into character space.

```cpp
Matrix3 inverse(float fTolerance) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-inverse.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-inverse.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
