<?xml version="1.0"?><doc>
<members>
<member name="T:Vector2" decl="false" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="20">
<summary>Class for two-dimensional vectors.</summary>
</member>
<member name="M:Vector2.Length" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="30">
<summary>Used to calculate the length of the vector.
<returns>The length of the vector.</returns>
</summary>
</member>
<member name="M:Vector2.LengthSquared" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="35">
<summary>Used to calculate the squared length of the vector.
<returns>The length of the vector squared.</returns>
</summary>
</member>
<member name="M:Vector2.Set(System.Single!System.Runtime.CompilerServices.IsConst,System.Single!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="41">
<summary>Sets the vector's components.
<param name="x">The new x component.</param>
<param name="y">The new y component.</param>
</summary>
</member>
<member name="M:Vector2.Set(Vector2!System.Runtime.CompilerServices.IsConst)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="47">
<summary>Sets the vector's components to match those of another vector.
<param name="vector">The vector whos components to copy.</param>
</summary>
</member>
<member name="M:Vector2.Normalize" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="52">
<summary>Used to resize the vector to a length of one.</summary>
</member>
<member name="M:Vector2.DotProduct(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="56">
<summary>Calculates the dot product between this vector and another.
<param name="v2">A reference to the vector to dot.</param>
<returns>The dot product.</returns>
</summary>
</member>
<member name="M:Vector2.CrossProduct(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="62">
<summary>Calculates the cross product between this vector and another.
<param name="v2">A reference to the vector to cross.</param>
<returns>The cross product.</returns>
</summary>
</member>
<member name="M:Vector2.Zero" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="69">
<summary>A vector with both components set to zero.
<returns>A zero vector.</returns>
</summary>
</member>
<member name="M:Vector2.Distance(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="75">
<summary>Calculates the distance between two vectors.
<param name="v1">A reference to the first vector.</param>
<param name="v2">A reference to the second vector.</param>
<returns>The distance between the vectors.</returns>
</summary>
</member>
<member name="M:Vector2.DistanceSquared(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="82">
<summary>Calculates the squared distance between two vectors.
<param name="v1">A reference to the first vector.</param>
<param name="v2">A reference to the second vector.</param>
<returns>The distance between the vectors squared.</returns>
</summary>
</member>
<member name="M:Vector2.Lerp(Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,Vector2!System.Runtime.CompilerServices.IsConst*!System.Runtime.CompilerServices.IsImplicitlyDereferenced,System.Single)" decl="true" source="c:\users\300016613\desktop\spacefighter\spacefighter\vector2.h" line="90">
<summary>Used to linearly interpolate between two vectors.
<param name="start">The starting vector.</param>
<param name="end">The ending vector.</param>
<param name="value">The interpolation position from 0.0 to 1.0.</param>
<returns>The interpolated vector between start and end.</returns>
</summary>
</member>
</members>
</doc>