/*
   Copyright 2020 Raphael Beck

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

static const char ES256_PRIVATE_KEY[] = "-----BEGIN EC PRIVATE KEY-----\n"
                                        "MHcCAQEEILvM6E7mLOdndALDyFc3sOgUTb6iVjgwRBtBwYZngSuwoAoGCCqGSM49\n"
                                        "AwEHoUQDQgAEMlFGAIxe+/zLanxz4bOxTI6daFBkNGyQ+P4bc/RmNEq1NpsogiMB\n"
                                        "5eXC7jUcD/XqxP9HCIhdRBcQHx7aOo3ayQ==\n"
                                        "-----END EC PRIVATE KEY-----";

static const char ES256_PUBLIC_KEY[] = "-----BEGIN PUBLIC KEY-----\n"
                                       "MFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAEMlFGAIxe+/zLanxz4bOxTI6daFBk\n"
                                       "NGyQ+P4bc/RmNEq1NpsogiMB5eXC7jUcD/XqxP9HCIhdRBcQHx7aOo3ayQ==\n"
                                       "-----END PUBLIC KEY-----";

static const char ES256K_PRIVATE_KEY[] = "-----BEGIN EC PRIVATE KEY-----\n"
                                         "MHQCAQEEIMRr0qJ5P1yLSjiVGVxrpSH2XHsEFbnLVG3IJ5UofWVWoAcGBSuBBAAK\n"
                                         "oUQDQgAEKDFMxQ2xpH+AabiiGGo+sXCeD52MYgufyE+AqMgsXbq9cD/TGFuqrCH3\n"
                                         "JncFWxLGamxuYQ9gdNZ9uJzk9pwgGw==\n"
                                         "-----END EC PRIVATE KEY-----";

static const char ES256K_PUBLIC_KEY[] = "-----BEGIN PUBLIC KEY-----\n"
                                        "MFYwEAYHKoZIzj0CAQYFK4EEAAoDQgAEKDFMxQ2xpH+AabiiGGo+sXCeD52MYguf\n"
                                        "yE+AqMgsXbq9cD/TGFuqrCH3JncFWxLGamxuYQ9gdNZ9uJzk9pwgGw==\n"
                                        "-----END PUBLIC KEY-----";

static const char ES384_PRIVATE_KEY[] = "-----BEGIN EC PRIVATE KEY-----\n"
                                        "MIGkAgEBBDCmT7i4o8x5NZDT2nk1D4TUxKDknyx9xGL3F0eRATDndq6MNVmkdAwl\n"
                                        "+8BaWL6xAS6gBwYFK4EEACKhZANiAASmzsk7PEHrovqP3HvWz3lRKpWM0lv//O2A\n"
                                        "wz20beljIJkKCRQiM9K4rlCcdipGwrIj/tlkBWXwbfwuLvZfkJ0SNYtUuC8H/7eu\n"
                                        "UuHfD70y0lfVQ5Ubze5luZ56j+FK+VI=\n"
                                        "-----END EC PRIVATE KEY-----";

static const char ES384_PUBLIC_KEY[] = "-----BEGIN PUBLIC KEY-----\n"
                                       "MHYwEAYHKoZIzj0CAQYFK4EEACIDYgAEps7JOzxB66L6j9x71s95USqVjNJb//zt\n"
                                       "gMM9tG3pYyCZCgkUIjPSuK5QnHYqRsKyI/7ZZAVl8G38Li72X5CdEjWLVLgvB/+3\n"
                                       "rlLh3w+9MtJX1UOVG83uZbmeeo/hSvlS\n"
                                       "-----END PUBLIC KEY-----";

static const char ES512_PRIVATE_KEY[] = "-----BEGIN EC PRIVATE KEY-----\n"
                                        "MIHcAgEBBEIA99ixxKKzlE5YmWEq65ZNt6JNXbYkj1x5RrePENwo7oyBNh6v1bHL\n"
                                        "maMyT+dIGVxKXN09x7WeipdArELA891BGeWgBwYFK4EEACOhgYkDgYYABAA3XwC+\n"
                                        "Vf5yIWfKmAdUPkKOpjlklo3pijqsy7r6wnwaUQszopgv5sNxFXNt647L8lZU1KFh\n"
                                        "xFwn2GyXaoEOebcMVgGUhRURpcADMIyVgKEoZcKwjydKDNy40XLKbb4Gzv3LAwpY\n"
                                        "Os+OHwhkHmNGJ9mHIlKzpIaLSiNXwGa1ZosgwPlI6A==\n"
                                        "-----END EC PRIVATE KEY-----";

static const char ES512_PUBLIC_KEY[] = "-----BEGIN PUBLIC KEY-----\n"
                                       "MIGbMBAGByqGSM49AgEGBSuBBAAjA4GGAAQAN18AvlX+ciFnypgHVD5CjqY5ZJaN\n"
                                       "6Yo6rMu6+sJ8GlELM6KYL+bDcRVzbeuOy/JWVNShYcRcJ9hsl2qBDnm3DFYBlIUV\n"
                                       "EaXAAzCMlYChKGXCsI8nSgzcuNFyym2+Bs79ywMKWDrPjh8IZB5jRifZhyJSs6SG\n"
                                       "i0ojV8BmtWaLIMD5SOg=\n"
                                       "-----END PUBLIC KEY-----";

static const char RSA_PRIVATE_KEY[] = "-----BEGIN RSA PRIVATE KEY-----\n"
                                      "MIIJJwIBAAKCAgEAoWFe7BbX1nWo5oaSv/JvIUCWsk/Vi2q8P0cGkefgN5J7MN7K\n"
                                      "fv7lq0hl/1cZcJs81IC+GiC+V3aR2zLBNnJJaxa4sqk+hF5DJcD2bF0B80uqPYQU\n"
                                      "XlQwki/heATnVcke8APuY0kOZykxoD0APAqw0z5KDqgt2vA9G6keM6b9bbL+IvxM\n"
                                      "+yMk1QV0OQLh6Rkz46DyPSoUFWyXiist47PJKNyZAfFZx6vEivzBmqRHKe11W9oD\n"
                                      "/tN5VTQCH/UTSRfyWq/UUMFVMCksLwT6XoWI7F5swgQkSahWkVJ93Qf8cUf1HIZY\n"
                                      "TMJBYPG4y2NDZ0+ytnH3BNXLMQXg9xbgv6B/iaSVScI4CWIpQTAtNKnJwYg2+Rhf\n"
                                      "YBC07iM56c4a+TjbCWgmd11UYc96dbw83uFRjKZc3+SC38ITCgMuoDPNBlFJK6u8\n"
                                      "VfYylGEJolGcauVa6yZKwzsJGr5J/LANz+ZyHZmANed+2Hjqxu/H1NGDBdvUGLQb\n"
                                      "hb/uBJ8oG8iAW5eUyjEJMX0RuncYnBrUjZdEFr0zJd5VkrfFTd26AjGusbiBevAT\n"
                                      "fj83SNa9uK3N3lSNcLNyNXUjmfOU21NWHAk5QV3TJb6SCTcqWFaYoyKR7H6zxRcA\n"
                                      "rNuIAMW4KhOl4jdNnTxJllC4tr/gkE+uO1ntB9ymLxQBRp8osHjuZpKXr3cCAwEA\n"
                                      "AQKCAgAXtQGoRgzMDPnUb6WEPB2WMXJR3Id+1R21X/43lewqzcJ6Ieh2coSTvm15\n"
                                      "bramg6+Seh0zImdD2v+/Rzv5/x0I9cwJNvKfqGdN1wR8U8dzEcT/B3Wki9Kczxrc\n"
                                      "sj+3qvV4BePRwwwyHGuVYhC0QU/LoIVplMwzswIPG697oAbvxBEwW4cFh5qkDoqN\n"
                                      "y34ba5/jSyP610EfCpZSblht8F3XOlzh2644NmQHlOzuBj8MCj2o0iSvHSrgWOUN\n"
                                      "A8gi/zkTmGvktxoIGqxKdf0/wHcmXhK1B7268ldRPuCNhVxQ2eTInXXARPMsxiXC\n"
                                      "/yCKPzt+MMy8cZnJaFcthTdb/zxs5CKKgBKIl5svSW3ZO27SXJ8jo8m0cUUxwAQO\n"
                                      "jJCNroBMBlCDN/sILhpzgnPLkVXnK+/uUYSBe/oOHd7mL38ohlMPepbCeFu4r6fP\n"
                                      "xpOrROTIzDblg9/cne/TLqSPu2K6qbsXFoL3v95V9ieAETnGkTHuKwqW1gMYtOin\n"
                                      "Ad0GWIl4PZCAjbKptSFTM5/8nWiPdJ3YnkE0nQDSgK66ZRjyRCVSzE5CcgbiVlMW\n"
                                      "mXVsIXnt/RHsLsPuGuzURhSmjVg+x0g2nAPmnZuG+7wJOF1vVCYT1gufblaHEBAo\n"
                                      "ofcmYfdYxhd2iQmWJi/uwnC0f6YdF+wq+fLFuPMPgCMvdhe/oQKCAQEA6p8BV4qA\n"
                                      "aRbcV137k4/+jx3zrOA736kRjmHatR1fq0MDTk4JfvWrH5kfl8VS6b4fiYsDVTx6\n"
                                      "ylxYV1paqRUfNmfzuPQStM+arkFIw/6754CoESvqF/uU/JRe6WZIB1Jr3A4XNzZe\n"
                                      "p/9+0hJeQlwRUWPhWMUNIJPjaQ3kmdeIUEsRcIkf4e4xJzhilnxarK4/nkqicgo6\n"
                                      "H2JRD1QKtO96ncGDDLmwWXMxYA9RUHaURYten9bi36V8gt69/zI6B8uTyMJttUma\n"
                                      "ziMr4nBsvfJDT0C0LG9SqsAfPkUMWyHSXxXn7N7S4Yy48k+wyp6FMKN13d/aWqdy\n"
                                      "K4n2W8ux8sHMIQKCAQEAsBXh0HO8eZpanq3Vl0tiHmCpjTsXFUg/hOGrck4s/vaG\n"
                                      "mLiSqCHKX6qfoLrEWUiPfCuqBprAsSebq2c/xkWdwW1UP/6m6dh6REXHbZbTyot4\n"
                                      "JNSPwNSvfu3P6cmLFyao4u6AciO/V18kGXf64XsDZ9gb47oVGtcSmYcsHsVTIyE6\n"
                                      "84+UyO9ogT2CNBN7kHqP5LT5iQsX+YzQcJuEmCp8JO6Az/pkErH15p2uLIHHTXRK\n"
                                      "gGrazVRl4Gt4Qdx4dGk/WcTK6NDPeoi4Wki1DzzK0fJNUDYHItycZDK1bfY+2n+Q\n"
                                      "C5d40kIR4oRdHC0VF94clXuTD/Z7tpgN2vXODP9IlwKCAQAJVxUlmATuqhNRgxNN\n"
                                      "15Cpv+aAfljD2aYyReEADtBNMBjEmES2gi8yzdS9JQTc+02kGx2h2guFXNHDgHxV\n"
                                      "eNrKPq8sMMNB4XXl9AFilBSE7dFDBb2HAOP4fiudHQ5HBFf45bK05vwzse8pi8Om\n"
                                      "3qVt2Q0SjJ2uK1UFTKFKIpNxpttl4H+dbe8VAaCjHwY5E6LCuXPoGFIiB7b0ZkMa\n"
                                      "2uHFv/tomUfU98oCafmxu1bBwf+dW1+iyaLATv+/Vg+LWeZjOqJFck2wYSQRGqqp\n"
                                      "kShu0kOZ9UCUPZvAzdzlD96hHG0kN+arRf/i3ZtLJa5ltkwt7ghyTXI1G4PsOZq2\n"
                                      "8FIhAoIBAEYUf2n6FgIDt5s9ritnuiZC7FgkM1yqA3W8ZwK4MFpM/Wac1umJgUSv\n"
                                      "4JYUnv61zT1rF2FHh/c5v0/paM1deZq5C3XowL+DA65WYzevdp0/AtMNsiTZwPrw\n"
                                      "ZPYz22KcZUzkBUToC0gXuoNUaAoDbmiO7xKkRbAH9wQZcyrP9/WcTR0QgPOzrND7\n"
                                      "DO3y7xOiY9BvYnzzaFhOfcrDanMxPXVpYuTjT57NKwPcr6xQ/mRKKziOzoQ32dAG\n"
                                      "lbcIqvwRwz/T/bnJGTo4Xb64/y6QUFxcZf7NceujB68tK14XSg6mBEtIvrJXz0xq\n"
                                      "x6/mFWYJZTDtHKuWusgCHkmN2LL9iwMCggEAW00XBAIhaMskQh4TiBk8e2n8mBw3\n"
                                      "oqdRPgJ4LWLEdBxYJKoQCffyGW47qZXEvb416r5mq1XwHJlrYUqcf63Lj3ANAt+8\n"
                                      "ifE/FUhwb8jAiji6XTicDJERkM5HrxDA3TS2pbBM2/bIurOzBXGpXNpnMLKbNCur\n"
                                      "bvS5UcsSO5OvRH7JT4E5AwuuNPoiZb3nY/1wlC9VfzAc4tw5W1gMoElkiG1QxsMV\n"
                                      "ip5M37v06Exj2YURmRzIfhOGNgTf9NA91FZb73t94sUqxT0JbiWSA3llXKJn+NYr\n"
                                      "J04EngxPgHewJPwWf50GzLPK62OMKd7O5deTw+HO7qrClcpExZGsakc/cw==\n"
                                      "-----END RSA PRIVATE KEY-----";

static const char RSA_PUBLIC_KEY[] = "-----BEGIN PUBLIC KEY-----\n"
                                     "MIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEAoWFe7BbX1nWo5oaSv/Jv\n"
                                     "IUCWsk/Vi2q8P0cGkefgN5J7MN7Kfv7lq0hl/1cZcJs81IC+GiC+V3aR2zLBNnJJ\n"
                                     "axa4sqk+hF5DJcD2bF0B80uqPYQUXlQwki/heATnVcke8APuY0kOZykxoD0APAqw\n"
                                     "0z5KDqgt2vA9G6keM6b9bbL+IvxM+yMk1QV0OQLh6Rkz46DyPSoUFWyXiist47PJ\n"
                                     "KNyZAfFZx6vEivzBmqRHKe11W9oD/tN5VTQCH/UTSRfyWq/UUMFVMCksLwT6XoWI\n"
                                     "7F5swgQkSahWkVJ93Qf8cUf1HIZYTMJBYPG4y2NDZ0+ytnH3BNXLMQXg9xbgv6B/\n"
                                     "iaSVScI4CWIpQTAtNKnJwYg2+RhfYBC07iM56c4a+TjbCWgmd11UYc96dbw83uFR\n"
                                     "jKZc3+SC38ITCgMuoDPNBlFJK6u8VfYylGEJolGcauVa6yZKwzsJGr5J/LANz+Zy\n"
                                     "HZmANed+2Hjqxu/H1NGDBdvUGLQbhb/uBJ8oG8iAW5eUyjEJMX0RuncYnBrUjZdE\n"
                                     "Fr0zJd5VkrfFTd26AjGusbiBevATfj83SNa9uK3N3lSNcLNyNXUjmfOU21NWHAk5\n"
                                     "QV3TJb6SCTcqWFaYoyKR7H6zxRcArNuIAMW4KhOl4jdNnTxJllC4tr/gkE+uO1nt\n"
                                     "B9ymLxQBRp8osHjuZpKXr3cCAwEAAQ==\n"
                                     "-----END PUBLIC KEY-----";

static const char ES256_PRIVATE_KEY_2[] = "-----BEGIN EC PRIVATE KEY-----\n"
                                          "MHcCAQEEIFHGK6UXpOLxgdACDNSS8G3AqdkdHDMD2qObdmEAhdoloAoGCCqGSM49\n"
                                          "AwEHoUQDQgAESqXIVJc5sFwq4GvFleGoJYknNi0hj5TqFfjnLQRK7Cf6CmA7yQCT\n"
                                          "4W5yQBB5ovNcAqvUQP6RYgW83oKAL/2OHw==\n"
                                          "-----END EC PRIVATE KEY-----";

static const char ES256_PUBLIC_KEY_2[] = "-----BEGIN PUBLIC KEY-----\n"
                                         "MFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAESqXIVJc5sFwq4GvFleGoJYknNi0h\n"
                                         "j5TqFfjnLQRK7Cf6CmA7yQCT4W5yQBB5ovNcAqvUQP6RYgW83oKAL/2OHw==\n"
                                         "-----END PUBLIC KEY-----";

static const char ES256K_PRIVATE_KEY_2[] = "-----BEGIN EC PRIVATE KEY-----\n"
                                           "MHQCAQEEIIJdznAvHYWd2xtgyjLswkcR125d/qT/3NmVgz5n4IPJoAcGBSuBBAAK\n"
                                           "oUQDQgAETvR1FEA+mmeTm/FQS0kTDVmFVVGClB6fFRJi0+HGbvDAeCDfjnOoB0+X\n"
                                           "c68+6ATR5CwQu/FTAr1JfuiFC2pF7A==\n"
                                           "-----END EC PRIVATE KEY-----";

static const char ES256K_PUBLIC_KEY_2[] = "-----BEGIN PUBLIC KEY-----\n"
                                          "MFYwEAYHKoZIzj0CAQYFK4EEAAoDQgAETvR1FEA+mmeTm/FQS0kTDVmFVVGClB6f\n"
                                          "FRJi0+HGbvDAeCDfjnOoB0+Xc68+6ATR5CwQu/FTAr1JfuiFC2pF7A==\n"
                                          "-----END PUBLIC KEY-----";

static const char ES384_PRIVATE_KEY_2[] = "-----BEGIN EC PRIVATE KEY-----\n"
                                          "MIGkAgEBBDCbjS+/FTuuhjJ7Lklyo9h1nlMH/0VcyCZlge58liaZ9g9Um/DSTT0V\n"
                                          "utL4VoxWFjGgBwYFK4EEACKhZANiAAQiH6BZV7ZHw5m9LY7ZOzK7uD97Vyi9u0B2\n"
                                          "BBe5w6jBQpzjahP4S91onTWzsYWymELbVYldfWDDU/Wvcnf1C8LkUz+tQlgPWoa+\n"
                                          "ENtOkE00vxH3PCOyBqQ2ZL+aI0XKi1s=\n"
                                          "-----END EC PRIVATE KEY-----";

static const char ES384_PUBLIC_KEY_2[] = "-----BEGIN PUBLIC KEY-----\n"
                                         "MFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAESqXIVJc5sFwq4GvFleGoJYknNi0h\n"
                                         "j5TqFfjnLQRK7Cf6CmA7yQCT4W5yQBB5ovNcAqvUQP6RYgW83oKAL/2OHw==\n"
                                         "-----END PUBLIC KEY-----";

static const char ES512_PRIVATE_KEY_2[] = "-----BEGIN EC PRIVATE KEY-----\n"
                                          "MIHcAgEBBEIA0Szh1UBd2jf92Es2Ow6Mp+qknIcuJbpu4PpcbDq7DnkfQmJY5bEK\n"
                                          "CVhWHWr2rBoPj3tZ1ZiXU/1OHzteQMzIt1egBwYFK4EEACOhgYkDgYYABABhAawu\n"
                                          "iJImltrUxMGACfuJvonUyHkVGxYHBjaiI4WxqjgqcNdpRUgdnFxPBrpcUTNJWTgG\n"
                                          "3AUsewUyBXd3keaoYACk4++ws2/voFOjrHlIM0rjaB1FLPvHUpPnaf9YAFI8bFrm\n"
                                          "6YtBo4uKejSGKNVmXwSE8iQOjgCa1zU14jZRMHZ06w==\n"
                                          "-----END EC PRIVATE KEY-----";

static const char ES512_PUBLIC_KEY_2[] = "-----BEGIN PUBLIC KEY-----\n"
                                         "MIGbMBAGByqGSM49AgEGBSuBBAAjA4GGAAQAYQGsLoiSJpba1MTBgAn7ib6J1Mh5\n"
                                         "FRsWBwY2oiOFsao4KnDXaUVIHZxcTwa6XFEzSVk4BtwFLHsFMgV3d5HmqGAApOPv\n"
                                         "sLNv76BTo6x5SDNK42gdRSz7x1KT52n/WABSPGxa5umLQaOLino0hijVZl8EhPIk\n"
                                         "Do4Amtc1NeI2UTB2dOs=\n"
                                         "-----END PUBLIC KEY-----";

static const char RSA_PRIVATE_KEY_2[] = "-----BEGIN RSA PRIVATE KEY-----\n"
                                        "MIIJJwIBAAKCAgEAqQ1kJGUdpHNBmZWwnYM8PVhCeHx8sn9HCjb8RPkd3dhwuKPB\n"
                                        "p+9n7XmIcN9Vh8ZPaK1suphDF2BjTG78ddOrWIqeroenKvONKOUqPL5woDMFhCwV\n"
                                        "nGRgPLpaWNhf90Ngll+VJATeB8mwqqhhlMAnHAijwy2jFY48nvj6MGN7G+DTxSGK\n"
                                        "Q843Dugeh912OyhteflPPQhBW2bAvFiaG3DxyJpGFiPxhEsVmECB5wdm93FgeenN\n"
                                        "Z7MBb1uw4nDCT5Ca1vR5hDhVH68JQ4qokz3/ykdKl4Wy15ghf5X34/uL3t5kiyX2\n"
                                        "0U17ao0Oxu594VsKDvvJ6FFrg1hu/s8F+Wcy5A7ABcQ4zXdoaTZ16LDjn7DbszJO\n"
                                        "wy36dFbv4sM2BaCx5UrBnNsdCXxZBKzF/+wuNjrZetc/3eeWpyaImOJ/YtjhO5lk\n"
                                        "RZa7jFCgYfUi2zgTKJDsMhtc0dDU8dyb9hyi4cfp8+6z49zqg/pdyUhSdk6xcVEE\n"
                                        "0qi+T61QWBqr78lk4lZbV0wl7NmIsrmJ9iS3kfXPABZbbOfp1qWWXBea/l1XBbPV\n"
                                        "Pdp+AD3oS+ixsPsYfTQlQgF+p16FYXtZoiyn34wA+ONW8mMkoI+BIx4zE/qdYDgu\n"
                                        "jI0WIyLxpxt0ICMq7/SeDCPsBbk3JpPRL61787vQMiAQ+TRo379kY9FkbvsCAwEA\n"
                                        "AQKCAgAOgc+uL98zVZCzlVzqp3Br8z8BB+3Lg5CdF8reQGKHvyMtNSBRQQIyJtPG\n"
                                        "m+PDGwmFehxyhs57GxJqZLvVgKyblIm5gHqf/PaII+JUBCO2G6rFhOL14MdBbtyB\n"
                                        "80+I8IdBYEJ0LNbA5FX8zyZQlYzFoxgqj6gHGYWqPsN5k4/k/I4vxIkQ+IlRBipY\n"
                                        "jnCu8vEyHmrmWecB6PdxMklHQZH+HP8Wt07qg2b/AcokAUacxWX6EE5IL9xXqg6r\n"
                                        "3/FM0qP2/lPPPOZRKbwpx6RfvlpNCYElL5wBVFTLlhsHvXZrUbpfForvuy50Hla+\n"
                                        "S4kR5bYfQww4m4QWaWhdBXcFyA1d0PWFyBVij5y8h80hOg7nL0NYvBfyv9OubyxU\n"
                                        "tYsyFz0MWv7gQIB0I0arUzxlWrONf3HwGmUD0r5cEfWS97zxHS/wX21chuqtiHME\n"
                                        "242lGO1fHA580Yz2sWKThSse6iNK64lpoBH6xl/Xm+AgfZpxzBMoeNJXQ8reV3+F\n"
                                        "MAZJGVYVcWY4LUbTHT/gOVNq8iO8j83sT6yK/Er0KdIgFRGAkif4Jk4AcAINGe0A\n"
                                        "XpTNHGOJUjzv8PyZwxLw/RQzMCD7I9jVgEldabnSYlE25/l5Mr33QvM3Ldk/brX2\n"
                                        "LqnepgVdztTp1b1/lyPD2gj8VPzM9auA51ms7Fz72vJorC97AQKCAQEA4Q4xTDgS\n"
                                        "n2rHHTDciDjEfvUl/P+csrpbOrAa36alwSSfMzzkh7KfWQrVDCp8PRnKLDJcLMr0\n"
                                        "XPdrV8FWKI/hf3Nvua/SNX/wyf1jLwYheXGYRGvb1fFlatTC+/eOAsCuFUv3ybG0\n"
                                        "bgEII5bbD69B2UnTn6j/q1JFwXSQrCTIAWFl0pBiPOglQMkJq4Cy1YCZWuUKvU/i\n"
                                        "Uv/PIqUcO6NUYdhVbI8J30KviFimOWf4uIX++sJ5uqZ5MTzmMZh3o65Ib/n4W0OV\n"
                                        "n1gB3UMmjM4wwT79el5d6NslCR5YAkL+0vmA7q7RtiUFA+FW6tLifs7UaUbw3+jh\n"
                                        "14eTcNif2ls8SwKCAQEAwEvsnKNi2u+bVl84Qib53gewjn7oOK6ECqTWu98kCo+o\n"
                                        "xod8RNFCRoAjhgl2QFX171x9Jgk0NDfeNKqh5IuwOm2LFVau6AGBKh3WavW7RCnB\n"
                                        "ZQJMzSr1B/3GYIWhwx1UKSJNSIgQds3mXePdNZc3EzjMH5G3CPpTX2R8zQy/pox2\n"
                                        "tj5SfOWi/vCSbC+rNFPMYaDwuSSMABGzifBvPGVhtqUvFRrtD+ALVskUOW5Uyrx5\n"
                                        "l2qxyzCLaj8xXS7DpY2m6ZfftOsLyDQ3c87dMlUs9JTq5Ko2mr42LrNnpnss+J0M\n"
                                        "grceRKiJDgkz5wsfBu6U1OHPI//W/zSt5zSRaV+KEQKCAQBxjYKsLWKgEvUyMlQj\n"
                                        "W1kxoamwNJywxTyAqRh2HhRmFn9JEAFSwnqKJ+AFCm6zOY77q9E8PI79VU1Q8tjx\n"
                                        "EF+7udf2fdL3cX1hvTrNIC/Fod4tL6q1EN6V/5H+JhL+Ko/raPA2UTZzhou/wT74\n"
                                        "c/oqk4h2d4PAwns1uAXDBa/wml8Q1g7rIkqhnI4HfaE9/mviI8y+Zk8Qh8fQeDR9\n"
                                        "ltRdphS7+JQHlRMSHYCJWH9zQxC7H2LiHVrq0Appnb9H1AjyjtKT4c7dnj8aj+Yk\n"
                                        "h2isKIcmtfR2KBRQvIG1am4+rusyAv0HBTi5k3oSc6MaTmt4TvX8U/mXkO2As5w8\n"
                                        "RWpvAoIBABulTrkeTEIJnJ2IRwBLtjSTinCSEjTD8jvNgwmzhOz3xl30cIs8Qnj8\n"
                                        "Rx8oERYixZ7J/zwOqrCvL4UG2wuOgaGEyjAhLDgyry0s6Pyro2ajUiiBciU0/dFO\n"
                                        "TMznqV/xwX3Abrf0x9kstOfesJjZypM64S3Qty3VP1NBkSexo4QAQbjlsNo/8XUR\n"
                                        "hRuEpup4+bM3fiQ/+tivss4sAPH/6VJm4SP5oQddQIQTmJLBJ/OVsS1xq2n46rI1\n"
                                        "r5Uj+gC9IrgGm6TY/fKkfyxpGyf3UuU+255QUlVg7007gbVPlCGSApBwXyujx0B7\n"
                                        "VjjrQmSuvDr2097rEy/RlQbeaeFqWOECggEAM47eAjch+qICNLdowysWht0HjNPr\n"
                                        "FhTpVfXh4ybjdJU51EMh37oJtQ46QuBh0LnnbOS+p7DX59W6xN2KwawxMNkilK8M\n"
                                        "QWBp8kS5X0mc7TZkK4gqbXT3uSXS7boOi/tm1vFbHcm57XqjZK6oUGkT1bGlVceV\n"
                                        "9pPUr8vipUrCLVlq3INXM4b+VecMTHXMLLz1XHdCuw5t2wAV08sY22GogFNE8vfZ\n"
                                        "7+amO2WFoybdtZZjW4SmXAL+T+V8FQddzvmKj38bRHulqutf6LqRk2JfQCrwZp3x\n"
                                        "uDY3rROMPonHlZLZLX8nC430FzTYqnvkNwDS15oHYLl1JrLpZJ0/luPcrA==\n"
                                        "-----END RSA PRIVATE KEY-----";

static const char RSA_PUBLIC_KEY_2[] = "-----BEGIN PUBLIC KEY-----\n"
                                       "MIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEAqQ1kJGUdpHNBmZWwnYM8\n"
                                       "PVhCeHx8sn9HCjb8RPkd3dhwuKPBp+9n7XmIcN9Vh8ZPaK1suphDF2BjTG78ddOr\n"
                                       "WIqeroenKvONKOUqPL5woDMFhCwVnGRgPLpaWNhf90Ngll+VJATeB8mwqqhhlMAn\n"
                                       "HAijwy2jFY48nvj6MGN7G+DTxSGKQ843Dugeh912OyhteflPPQhBW2bAvFiaG3Dx\n"
                                       "yJpGFiPxhEsVmECB5wdm93FgeenNZ7MBb1uw4nDCT5Ca1vR5hDhVH68JQ4qokz3/\n"
                                       "ykdKl4Wy15ghf5X34/uL3t5kiyX20U17ao0Oxu594VsKDvvJ6FFrg1hu/s8F+Wcy\n"
                                       "5A7ABcQ4zXdoaTZ16LDjn7DbszJOwy36dFbv4sM2BaCx5UrBnNsdCXxZBKzF/+wu\n"
                                       "NjrZetc/3eeWpyaImOJ/YtjhO5lkRZa7jFCgYfUi2zgTKJDsMhtc0dDU8dyb9hyi\n"
                                       "4cfp8+6z49zqg/pdyUhSdk6xcVEE0qi+T61QWBqr78lk4lZbV0wl7NmIsrmJ9iS3\n"
                                       "kfXPABZbbOfp1qWWXBea/l1XBbPVPdp+AD3oS+ixsPsYfTQlQgF+p16FYXtZoiyn\n"
                                       "34wA+ONW8mMkoI+BIx4zE/qdYDgujI0WIyLxpxt0ICMq7/SeDCPsBbk3JpPRL617\n"
                                       "87vQMiAQ+TRo379kY9FkbvsCAwEAAQ==\n"
                                       "-----END PUBLIC KEY-----";

static const char X509_TEST_PRIVATE_KEY[] = "-----BEGIN PRIVATE KEY-----\n"
                                            "MIIJRAIBADANBgkqhkiG9w0BAQEFAASCCS4wggkqAgEAAoICAQDvprmN0/QvPYXG\n"
                                            "Yxh1e5Cpyg85YeosbctrRTfm3Go4rnlwXUZ5pD3W+q2ag4CPo+xtTOTw1XEi2pGc\n"
                                            "0Wm0cKsSAxqUQV4TfP7EHrTWd/EmXwnsMbnEVP6UNT2aY0oi3RSKu3wk7qTneP/5\n"
                                            "c8h16BnDFtu/fBWvAw9cvQa56PYtZPaXss4PKu/O2wCCLsRcies+EJyv9miQitxk\n"
                                            "QEfenPOfeH7Z8nMvffZpB2r7rtMAVR5Qfq6fVOn8JJwUfjqz3G6KxkgY9yhG2zWF\n"
                                            "dvS4Wz0vW+3qQJKKPcUF6EpzXY0vFgzzOZTFzbJjJnsn0Bpnd/D9WLYGAzhzpQ6y\n"
                                            "4nKDe4pnOq2RIA2P5h4u9IhhtYCqZomnq5CV11e9DqYBKP6QIIaRiqH9TxdmaAQ+\n"
                                            "Wj27DoDEkxF8gO8aGHMRXeBEXfCb2YWsK0LPBv6qsboF7KoRdPSysPrF1hWKraRf\n"
                                            "NBfcgrgXX2QOZj9sTo9pwx+U4rbGD4HwcH+Y0fpcUiWVBCSZGZRtTS6bp3ugDt02\n"
                                            "24Ob6amfws/r6zuz2Bnl0c9pzZS1xr3l/e9h76egruAgVdZ7jNT/LcfnEaQyNVD2\n"
                                            "p9T/o1Wcd3qmZ4DsukrRkBC+loj2zu6j1UbGUa8Pexk3Snn0HVlBZEB8vyp/d9H6\n"
                                            "1H4gfzzjkPJ7+iCc7LykG8twCYapiQIDAQABAoICAQCOxRG4F7RaTFmc5b5VhyaY\n"
                                            "sEK/mcCLdWGBZ3w1McyqNe8s7LSmlR0uLKst6Pe3Gx4nw26Et3OuIu4qsWs6zwBr\n"
                                            "O6Qi/IpSK94O8ogjWNM2W9oqdzlHaKc9njYz+sDY4kJxn94GlpFxQNmmP78F1x85\n"
                                            "5S1G92Jnn/gP9KDEMrAuPP7XQvOVf6vb3QaBh+D9jECz+euOvMpwiflgVBc83N4a\n"
                                            "fAt+Rf0vJuici4nFpNIZWZw0sjPPwiOfTiQZ5VWNf13vmM6s6Nl61O8ess554gki\n"
                                            "ZK7pJkzmxIPS0B9CeVI54fYXFI+4A6IphWxLPKPuTjsogyf1jwebhZKrKVK1V+0M\n"
                                            "CVjE/8vVnKspS3bL1Cs3aGz8XD43A5afbev+lvTF42LiJkLLwwBir1A+cYRXMt6+\n"
                                            "1FtXHkOoGc1ENy5bRIS12m4Zcbs4D8GUUyF7ATUd4iCDnmtypDJfhlnh6m5bM3U7\n"
                                            "ba2iHF41bA3YiF3y879+BaJqPYFW4S5bSdcpcx2kUGSRLIWjwFaNkRdbQXCgB7L+\n"
                                            "uFkQxG2oUZQKO8KaWqog08i84THBz6Q/jcqPwQCoasIehsXhhXui5qSPN2hdGhUu\n"
                                            "zfQPWo/RmJUZtExq13bcp5tnxRiiItXirEvfSDws4myzVSDNXwlbtifJ8ZLoexhY\n"
                                            "hnLUAQTfs3JpIGkarJTOgQKCAQEA/6Yc8ZkxW8lKe7O0hNRLkWbcu0p38fKS0WAs\n"
                                            "T1v7mWLotNMYB8tfj4sjqO56W6ow5DdXRu85uSY6HlZzT5IioypbsCZn/KHezq69\n"
                                            "3qS0VXuinIbrtUpDVXSYjFONxh3pGlio2g4cvA/RfK+falrc0OWEeWFNoizFqOKt\n"
                                            "znbpKr5aqo7RbLGLeaOi9JZeiakYSOOnMiwQxF3b5Y1L60AntWd97+IJGWE0b5uN\n"
                                            "F9wuqEWedEi34WwlfE+jCG4qduug+jVi93l/0/Ja8oNEsF/QdTvYNSRing9LykH1\n"
                                            "m6N5yunJocWyBcJQKWZ+FSadJy80Ro1EsMQbOBreHtK0WDmv+QKCAQEA7/r8qLi/\n"
                                            "jXREcNtlONzQvaw+8PcUG6LRtHKeO1EmwhtUKlOepIPcTnvwPQm4DU3Br3RJr3RK\n"
                                            "lYQ7sKQCJfRJ/tBQ6IBgYqqPd5q7WlXqEw7h6dNstZbOTMMKp5TZ8LuuOJsQ0dgc\n"
                                            "zPiJ/9siqy2uG3hJolCCoNQziiVh2P1qftUeSvQVVQwzVkQtjPQ+91j/k4W5iXLn\n"
                                            "Nu3xwWxcprtRTkX9gZLRlfVVLFm8t5k1wedKX3fgx2SnUZ0G7wZJNSH9GEn+15Ly\n"
                                            "tAlitMa62H3ZyF8Z291j1GiGptMuU4zN05AJkpMCfCXba77YG8gYHpBdnppc7jpp\n"
                                            "qn6Ick/Y5HRKEQKCAQEArWlZgsyefZtqCcUZc2yqIeQ7YFQgTp9z1dC93csQPLiq\n"
                                            "D1aNm2Pp223Pb5zspNcqOPQNINHPPvdePwv3RgdjtXhbH3691NFcWKiRpL/mj4HB\n"
                                            "CRpAMwY/7GydubpHlhbd8wAm8VrXRP4Z5NEger1NwemeVdOaHKLwJSI2MbHZciQT\n"
                                            "TlR4XJmGeal1NSH22Lw5+99on5DigsEEE48n61jmVpfwBlM2Rt/3+Kj0KTYy8/Pd\n"
                                            "ixV0ndWFC/DdLy/DYE1vMaobCrGA8x0Xch927Yjg11UT0OBwgLTxfS4G018tk2XI\n"
                                            "XxLCMkPfqmWaqvA5c8YCWMUkzh8IM6ON/iyBJsNiyQKCAQAB6GPjz3wuWrNElmnq\n"
                                            "ls7OAzWI4t31DklOfu7FF/MP7fmwUHPdaPLyaMfTJGWjLXARvgHr9Ce3opJ66ALg\n"
                                            "XF3OOce64XJitmpnkAJXSIGQ3zhqjHS7yNQhBhfqlyNYZ5WN+6WZlXc9Jeiq8QoI\n"
                                            "hFdy/nTPZoZzUtyKB5wMho83LOiNvf0BbRRnZilaioKJotp9SL3d2tz9scyPNhZS\n"
                                            "eQC/d4z5X7psz8N6k8gNSZmEzhroQWK3ExTFcFMiyVEBrCB/9e6hthhZ2A1B1Kad\n"
                                            "m/qEPkVNWyg1AxO29czTezYTrXx1/tcxN3fUFnNPXTrb21fzL9T3S92VLmZVSk82\n"
                                            "GbqRAoIBAQD5gq98Qsg+GjQBcQIr2s7CCiuh/BhXXy1EX3pWS7TBTNJjZuelqz+V\n"
                                            "d+JgpEtI9a01eupjgXXQvdNX2D/qmQxcYS3qV62fbk62MgbIunGnxyzAiaxNxEPg\n"
                                            "eaqdgib8imVjW0aUbAr+wQETD07i/+prVIvVkGrM8Limgu360KzsiLqoLCGNjV7U\n"
                                            "Kh3F8/cABhBD3hhk8dlpzLJ54hJyT6KmRhs04K4hLdOM1AAJufORMZAS2u5uA3qv\n"
                                            "xXkssDBZmGGV3v1bjHI7K9FhVxvxhQE/I+DxISeLfKBlOyEbCnWN62yFFwM4723j\n"
                                            "tF6kQQvdM380YEy709tn8m6Trpu/LOSJ\n"
                                            "-----END PRIVATE KEY-----";

static const char X509_TEST_CERTIFICATE[] = "-----BEGIN CERTIFICATE-----\n"
                                            "MIIFazCCA1OgAwIBAgIUMX1j0dGbtXKRJzr21GKaJ+TswuEwDQYJKoZIhvcNAQEL\n"
                                            "BQAwRTELMAkGA1UEBhMCQ0gxEzARBgNVBAgMClNvbWUtU3RhdGUxITAfBgNVBAoM\n"
                                            "GEludGVybmV0IFdpZGdpdHMgUHR5IEx0ZDAeFw0yMDA1MjYxODUzMzZaFw0yMTA1\n"
                                            "MjYxODUzMzZaMEUxCzAJBgNVBAYTAkNIMRMwEQYDVQQIDApTb21lLVN0YXRlMSEw\n"
                                            "HwYDVQQKDBhJbnRlcm5ldCBXaWRnaXRzIFB0eSBMdGQwggIiMA0GCSqGSIb3DQEB\n"
                                            "AQUAA4ICDwAwggIKAoICAQDvprmN0/QvPYXGYxh1e5Cpyg85YeosbctrRTfm3Go4\n"
                                            "rnlwXUZ5pD3W+q2ag4CPo+xtTOTw1XEi2pGc0Wm0cKsSAxqUQV4TfP7EHrTWd/Em\n"
                                            "XwnsMbnEVP6UNT2aY0oi3RSKu3wk7qTneP/5c8h16BnDFtu/fBWvAw9cvQa56PYt\n"
                                            "ZPaXss4PKu/O2wCCLsRcies+EJyv9miQitxkQEfenPOfeH7Z8nMvffZpB2r7rtMA\n"
                                            "VR5Qfq6fVOn8JJwUfjqz3G6KxkgY9yhG2zWFdvS4Wz0vW+3qQJKKPcUF6EpzXY0v\n"
                                            "FgzzOZTFzbJjJnsn0Bpnd/D9WLYGAzhzpQ6y4nKDe4pnOq2RIA2P5h4u9IhhtYCq\n"
                                            "Zomnq5CV11e9DqYBKP6QIIaRiqH9TxdmaAQ+Wj27DoDEkxF8gO8aGHMRXeBEXfCb\n"
                                            "2YWsK0LPBv6qsboF7KoRdPSysPrF1hWKraRfNBfcgrgXX2QOZj9sTo9pwx+U4rbG\n"
                                            "D4HwcH+Y0fpcUiWVBCSZGZRtTS6bp3ugDt0224Ob6amfws/r6zuz2Bnl0c9pzZS1\n"
                                            "xr3l/e9h76egruAgVdZ7jNT/LcfnEaQyNVD2p9T/o1Wcd3qmZ4DsukrRkBC+loj2\n"
                                            "zu6j1UbGUa8Pexk3Snn0HVlBZEB8vyp/d9H61H4gfzzjkPJ7+iCc7LykG8twCYap\n"
                                            "iQIDAQABo1MwUTAdBgNVHQ4EFgQUdpTiSUz+ghrFQTYFqwwORp+twEwwHwYDVR0j\n"
                                            "BBgwFoAUdpTiSUz+ghrFQTYFqwwORp+twEwwDwYDVR0TAQH/BAUwAwEB/zANBgkq\n"
                                            "hkiG9w0BAQsFAAOCAgEAUhO3z9vuINoJhRRC0NaKMBJZ11InS7RJneZQUox+XyH5\n"
                                            "GLBDTgq+cuOWFHJbuc1+l+jhLc/NePz1VTrsM8FHx0eb6mxgQ9ZMWR8rkvgwMWcS\n"
                                            "QJpQ7iqKaOxNheDwhO0+xfT6Qb5FFJhYgQGltpVUDcWdy2mAE/YX5C+hasnleZNY\n"
                                            "kndK4DOgjWve4ppgXV6b95ub3AUG7J8MxcOlokZePO9KN0zLHMKoI1AErxgge0bn\n"
                                            "XTr8Vo49WDJPe9V6z+nqxsOa3ETk5PF2DvP5/HfjJptpDScSY9GDGfC+iJQ6wx+G\n"
                                            "DumhShQKhi1zrW/oMGPuDvS+uPDOB3XjkSoGbSzqmgND2j2vubcwZhfADGHexHeD\n"
                                            "miY7mSuoCt7Ov3/ytrRFk5XHSxFX9J5wxGp49dyQw+o66ztKLDjSArKzmLjqjRUJ\n"
                                            "+0xqs/VSEc90nUjShnj4lTdzICjY7oYZXYTTh4cWHpb3gFL1lje3kbniRTGEo42y\n"
                                            "J4eMij88q5XxRciDqe3ghtHnI7Byp8f/LImN4FEQ7CzUABEnR7bA3sLG0EKK6b3K\n"
                                            "b27UaSIAB9qAZpPzR6JZlqn7VtWGztxoUHllJbhkYYX1NMjzoRLXWZ/Z3B0PDzrQ\n"
                                            "vjcq4PYfvb7foE7Dgru6p7kbaiMrFlq5/2+gTYKtrzvMvJUCFYRIYBLAF1kffqI=\n"
                                            "-----END CERTIFICATE-----";

static const char X509_PRIME256v1_PRIVATE_KEY[] = "-----BEGIN EC PRIVATE KEY-----\n"
                                                  "MHcCAQEEILCtGQwyDFrAitIwW6SBDf0Same9DbXtAZyyQqKvjWL0oAoGCCqGSM49\n"
                                                  "AwEHoUQDQgAEuTFP0g+2ZCbkdsIWdaOd6Bb4optizAb2bho0wmQHkXuIn61ITMYo\n"
                                                  "W51S4/Yj8RtuK4Qytei8zOYfu2bA5ziLoA==\n"
                                                  "-----END EC PRIVATE KEY-----";

static const char X509_PRIME256v1_TEST_CERTIFICATE[] = "-----BEGIN CERTIFICATE-----\n"
                                                       "MIIB4DCCAYWgAwIBAgIUff47v5Ew67QjFakzZaaoEl0QIdkwCgYIKoZIzj0EAwIw\n"
                                                       "RTELMAkGA1UEBhMCQVUxEzARBgNVBAgMClNvbWUtU3RhdGUxITAfBgNVBAoMGElu\n"
                                                       "dGVybmV0IFdpZGdpdHMgUHR5IEx0ZDAeFw0yMDA1MjYxOTM2MjRaFw0yMDA2MjUx\n"
                                                       "OTM2MjRaMEUxCzAJBgNVBAYTAkFVMRMwEQYDVQQIDApTb21lLVN0YXRlMSEwHwYD\n"
                                                       "VQQKDBhJbnRlcm5ldCBXaWRnaXRzIFB0eSBMdGQwWTATBgcqhkjOPQIBBggqhkjO\n"
                                                       "PQMBBwNCAAS5MU/SD7ZkJuR2whZ1o53oFviim2LMBvZuGjTCZAeRe4ifrUhMxihb\n"
                                                       "nVLj9iPxG24rhDK16LzM5h+7ZsDnOIugo1MwUTAdBgNVHQ4EFgQUxpCYIvk7B2yr\n"
                                                       "cjLBKJ9yMgndy5kwHwYDVR0jBBgwFoAUxpCYIvk7B2yrcjLBKJ9yMgndy5kwDwYD\n"
                                                       "VR0TAQH/BAUwAwEB/zAKBggqhkjOPQQDAgNJADBGAiEAoI5ybMSVMQ59LucjYTI9\n"
                                                       "6tgcEaWPkUp4AbUjMBr0a2ECIQC4STSHMHrNdUbbFQhKDcFXPzsQCSx8aDG8DbpV\n"
                                                       "29wHlA==\n"
                                                       "-----END CERTIFICATE-----";

static const char X509_secp384r1_PRIVATE_KEY[] = "-----BEGIN EC PRIVATE KEY-----\n"
                                                 "MIGkAgEBBDCkVvIFUjOekkdP6UerGMmntywhvr5aAlprrHfOqFOHlTPD+l0ZEir4\n"
                                                 "CPhr1mDLZf2gBwYFK4EEACKhZANiAARyd/EVDm6z6icabt1GoHxLj9uitL35+FZp\n"
                                                 "/1a9F4jImEEKYt1hMzriOi9Zj8DkD/z31qSmdyq4ohD+5mhd772v8QcSqSFH+k5y\n"
                                                 "ymGs00E29TuZQqp5QOTYhpoJ0OjPr6Y=\n"
                                                 "-----END EC PRIVATE KEY-----";

static const char X509_secp384r1_TEST_CERTIFICATE[] = "-----BEGIN CERTIFICATE-----\n"
                                                      "MIICHDCCAaKgAwIBAgIUDbxqitqfqp/DskfCgkvk1TW1aaQwCgYIKoZIzj0EAwIw\n"
                                                      "RTELMAkGA1UEBhMCQVUxEzARBgNVBAgMClNvbWUtU3RhdGUxITAfBgNVBAoMGElu\n"
                                                      "dGVybmV0IFdpZGdpdHMgUHR5IEx0ZDAeFw0yMDA1MjYxOTQxMzRaFw0yMDA2MjUx\n"
                                                      "OTQxMzRaMEUxCzAJBgNVBAYTAkFVMRMwEQYDVQQIDApTb21lLVN0YXRlMSEwHwYD\n"
                                                      "VQQKDBhJbnRlcm5ldCBXaWRnaXRzIFB0eSBMdGQwdjAQBgcqhkjOPQIBBgUrgQQA\n"
                                                      "IgNiAARyd/EVDm6z6icabt1GoHxLj9uitL35+FZp/1a9F4jImEEKYt1hMzriOi9Z\n"
                                                      "j8DkD/z31qSmdyq4ohD+5mhd772v8QcSqSFH+k5yymGs00E29TuZQqp5QOTYhpoJ\n"
                                                      "0OjPr6ajUzBRMB0GA1UdDgQWBBS+xOmGTrBlk/677qzvIs/gewVxhjAfBgNVHSME\n"
                                                      "GDAWgBS+xOmGTrBlk/677qzvIs/gewVxhjAPBgNVHRMBAf8EBTADAQH/MAoGCCqG\n"
                                                      "SM49BAMCA2gAMGUCMQC8br7MgMThMzd9dJlO13RnZCVw2DrNOZqulE7+v4jtNTka\n"
                                                      "UKa9Fd4wEvVg0n3ne0MCMDb3xpm5ifheqrhM9M12aqfOcIboEWrYUJImfFsefEX9\n"
                                                      "Y/l9iG2WlcjQde6Zmng8Ew==\n"
                                                      "-----END CERTIFICATE-----";

static const char X509_secp521r1_PRIVATE_KEY[] = "-----BEGIN EC PRIVATE KEY-----\n"
                                                 "MIHcAgEBBEIBSutIgzxJHFREmub2Z+G6+8AQgLhrSe3Y0I/OjGpKvbZhNtJEqBU5\n"
                                                 "n2NsOss0ql9fj4Y4REAnfauGiG4Rf1T1DJOgBwYFK4EEACOhgYkDgYYABAHiyIMu\n"
                                                 "KSknoSGbqZuWVP97r1Gj38+MCpbBJ/38MwnmUiF+dFX7eGp8g+V1PmHHF+pMY/CX\n"
                                                 "JzhFmhr3DIzEoWRYCQEt07lXFmzJbNatmlyc5MFdaSjK4QcHZ9/lF33mQJgk4KSf\n"
                                                 "v9sOG1Wk07izG+W5fhb9jZfjvvuy5RZxzyl+pyXiKA==\n"
                                                 "-----END EC PRIVATE KEY-----";

static const char X509_secp521r1_TEST_CERTIFICATE[] = "-----BEGIN CERTIFICATE-----\n"
                                                      "MIICZjCCAcigAwIBAgIUL3Bgye4TnXTHC7m8OM2MZIQXf3swCgYIKoZIzj0EAwIw\n"
                                                      "RTELMAkGA1UEBhMCQVUxEzARBgNVBAgMClNvbWUtU3RhdGUxITAfBgNVBAoMGElu\n"
                                                      "dGVybmV0IFdpZGdpdHMgUHR5IEx0ZDAeFw0yMDA1MjYxOTQyNDhaFw0yMDA2MjUx\n"
                                                      "OTQyNDhaMEUxCzAJBgNVBAYTAkFVMRMwEQYDVQQIDApTb21lLVN0YXRlMSEwHwYD\n"
                                                      "VQQKDBhJbnRlcm5ldCBXaWRnaXRzIFB0eSBMdGQwgZswEAYHKoZIzj0CAQYFK4EE\n"
                                                      "ACMDgYYABAHiyIMuKSknoSGbqZuWVP97r1Gj38+MCpbBJ/38MwnmUiF+dFX7eGp8\n"
                                                      "g+V1PmHHF+pMY/CXJzhFmhr3DIzEoWRYCQEt07lXFmzJbNatmlyc5MFdaSjK4QcH\n"
                                                      "Z9/lF33mQJgk4KSfv9sOG1Wk07izG+W5fhb9jZfjvvuy5RZxzyl+pyXiKKNTMFEw\n"
                                                      "HQYDVR0OBBYEFAz0kG1xSb0rb1jYbJdkgkpGawE3MB8GA1UdIwQYMBaAFAz0kG1x\n"
                                                      "Sb0rb1jYbJdkgkpGawE3MA8GA1UdEwEB/wQFMAMBAf8wCgYIKoZIzj0EAwIDgYsA\n"
                                                      "MIGHAkIArian16qdRWFjJ3DxxkdeuEHMy8CswiSBtR8+Xjq2o/7V3YpBeL4LU9pe\n"
                                                      "Ksc7e3m4rS12AxGvKFI8266mRAUGYWUCQQMnZkxtO2WAuLiCy4T0gXCtNdxn7ZT0\n"
                                                      "E4KoHQH30hR4Rst+bNUNZm7g3iNZZZ4eBXn9ZrdoUI6sB/2UI4Tvd+zA\n"
                                                      "-----END CERTIFICATE-----";

static const char EDDSA_PRIVATE_KEY[] = "4070f09e0040304000e0f0200e1c00a058c49d1db349cbec05bf412615aad05c4675103fa2eb4d570875d58476426818cfe37b62e751b7092ee4a6606c8b7ca2";

static const char EDDSA_PUBLIC_KEY[] = "4675103fa2eb4d570875d58476426818cfe37b62e751b7092ee4a6606c8b7ca2";

static const char EDDSA_PRIVATE_KEY_2[] = "e0f0206c80c0284000906080c1db0080dafa10c2bf6200025319785f42e41003d0577779b8c762ea4fcf845baefc33073d93975e5dbc5f5a385c76428870a224";

static const char EDDSA_PUBLIC_KEY_2[] = "d0577779b8c762ea4fcf845baefc33073d93975e5dbc5f5a385c76428870a224";
