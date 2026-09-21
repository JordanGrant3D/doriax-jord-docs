###### version: 0.7.1
---
Plane
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Plane](plane.md).Side

Which side of a plane a point or box lies on: `NO_SIDE` (on the plane or null box), `POSITIVE_SIDE` (normal side), `NEGATIVE_SIDE` (far side), `BOTH_SIDE` (box straddles the plane). Returned by every `getSide` overload.

```cpp
enum Side { NO_SIDE, POSITIVE_SIDE, NEGATIVE_SIDE, BOTH_SIDE };
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-side.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-side.h"
```
