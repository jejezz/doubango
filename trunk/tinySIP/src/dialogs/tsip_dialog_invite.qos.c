


/*============== RFC 3312 ====================
A                                            B

|                                            |
|-------------(1) INVITE SDP1--------------->|
|                                            |
|<------(2) 183 Session Progress SDP2--------|
|  ***                                 ***   |
|--*R*-----------(3) PRACK-------------*R*-->|
|  *E*                                 *E*   |
|<-*S*-------(4) 200 OK (PRACK)--------*S*---|
|  *E*                                 *E*   |
|  *R*                                 *R*   |
|  *V*                                 *V*   |
|  *A*                                 *A*   |
|  *T*                                 *T*   |
|  *I*                                 *I*   |
|  *O*                                 *O*   |
|  *N*                                 *N*   |
|  ***                                 ***   |
|  ***                                       |
|  ***                                       |
|-------------(5) UPDATE SDP3--------------->|
|                                            |
|<--------(6) 200 OK (UPDATE) SDP4-----------|
|                                            |
|<-------------(7) 180 Ringing---------------|
|                                            |
|-----------------(8) PRACK----------------->|
|                                            |
|<------------(9) 200 OK (PRACK)-------------|
|                                            |
|                                            |
|                                            |
|<-----------(10) 200 OK (INVITE)------------|
|                                            |
|------------------(11) ACK----------------->|
|                                            |
|                                            |
*/