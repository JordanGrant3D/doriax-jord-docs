---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Contact2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Contact2D](contact-2d.md).getBodyA()

Body2D handle for body A. Use it to inspect the other collider when the character arrives as body B.

```cpp
Body2D getBodyA() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/contact-2d/contact-2d-get-body-a.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/contact-2d/contact-2d-get-body-a.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
