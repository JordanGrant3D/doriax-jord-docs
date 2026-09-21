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

## [Quaternion](quaternion.md).equals(const Quaternion& rhs)

Fuzzy equality: `|dot − 1| < 0.001`. Unlike `==`, it treats double-cover twins as arrivals — the correct turn-completion test.

```cpp
bool equals(const Quaternion& rhs) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-equals.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-equals.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
