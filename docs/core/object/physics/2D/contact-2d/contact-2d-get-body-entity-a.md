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

## [Contact2D](contact-2d.md).getBodyEntityA()

Entity id of body A in this contact pair. Compare it with `getEntity()` to know which side of the collision the character is on.

```cpp
Entity getBodyEntityA() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/contact-2d/contact-2d-get-body-entity-a.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/contact-2d/contact-2d-get-body-entity-a.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
